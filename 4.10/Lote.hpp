#ifndef LOTE_HPP
#define LOTE_HPP

#include "Data.hpp"
#include "Produto.hpp"
#include <string>

using namespace std;

class Lote{

  private:

  Data data;
  string identificador;
  int QntMin;
  int QntAtual;
  Produto produto;

  public:

  Lote(Data Data, string identificador, int QntMin, int QntAtual, Produto produto);

  int getQntMin();
  int getQntAtual();
  void setQntMin(int _qntMin);
  void setQntAtual(int _qntAtual);
};

#endif