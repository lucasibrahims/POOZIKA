#include "Lote.hpp"


Lote::Lote ( Data data_, string identificador_, Produto produto_, int QntMin_, int QntAtual_) {
  this->data = data_;
  this->identificador = identificador_;
  this-> produto = produto_;
  this-> QntMin = QntMin_;
  this -> QntAtual = QntAtual_;
  }
int Lote::getQntAtual()
{
  return this -> QntAtual;
}

int Lote::getQntMin()
{
  return this->QntMin;
}