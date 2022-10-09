#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>
#include <vector>
#include "Estoque.hpp"

using namespace std;

class Produto {
  string nome;
  string codigo;
  vector<float> valores;
  string categoria;
  int lote_min;
  int estoque_min;
  Estoque estoque;

    public:
  bool SetNome(string s);
  bool SetCodigo(string s);
  bool SetValor(float f);
  bool SetCategoria(string s);
  bool SetLote_min(int i);
  bool SetEstoque_min(int i);
  bool SetEstoque(Estoque E); //Necessario operador =
  string getNome();
  string getCodigo();
  float getValor();
  string getCategoria();
  int getLote_min();
  Estoque getEstoque();
  int getEstoque_min();
};

#endif