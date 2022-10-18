#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>
#include <vector>

using namespace std;

class Produto {
  string nome;
  string codigo;
  vector<float> valores;
  string categoria;
  int lote_min;
  int estoque_min;

    public:
  bool SetNome(string s);
  bool SetCodigo(string s);
  bool SetValor(float f);
  bool SetCategoria(string s);
  bool SetLote_min(int i);
  string getNome();
  string getCodigo();
  float getValor();
  string getCategoria();
  int getLote_min();
  int getEstoque_min();
};

#endif