<<<<<<< HEAD:4.10/include/Lote.hpp
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
  Produto *produto;

  public:
  Lote();
  Lote(Data Data, string identificador, int QntMin, int QntAtual, Produto *produto);

  Data getDataLote();
  string getId();
  Produto& getProduto();
  int getQntMin();
  int getQntAtual();
  void setQntMin(int _qntMin);
  void setQntAtual(int _qntAtual);

  Lote operator=(Lote segundo);
  void imprimeLote();
};

=======
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
  Lote();
  Lote(Data Data, string identificador, int QntMin, int QntAtual, Produto produto);

  Data getDataLote();
  string getId();
  Produto& getProduto();
  int getQntMin();
  int getQntAtual();
  void setQntMin(int _qntMin);
  void setQntAtual(int _qntAtual);

  Lote operator=(Lote segundo);
  void imprimeLote();
};

>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Lote.hpp
#endif