#include "Lote.hpp"


Lote::Lote (Data data_, string identificador_, int QntMin_, int QntAtual_, Produto produto_) {
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

void Lote::setQntMin(int _qntMin)
{
  this->QntMin = _qntMin;
}

void Lote::setQntAtual(int _qntAtual)
{
  this->QntAtual = _qntAtual;
}