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
  Produto produto;
  int QntMin;
  int QntAtual;

  public:

  Lote(Data Data, string identificador, Produto produto, int QntMin, int QntAtual);

  int getQntMin();
  int getQntAtual();
};

#endif