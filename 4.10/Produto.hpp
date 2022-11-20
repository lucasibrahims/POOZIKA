#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <string>
#include <vector>
#include "MateriaPrima.hpp"

using namespace std;

class Produto {
  string nome;
  string codigo;
  vector<float> valores;
  string categoria;
  int lote_min;
  int estoque_min;
  vector<MateriaPrima> materiasPrimas;

    public:
  Produto(string nome, string codigo, vector<float> valores, string categoria, 
          int lote_min, int estoque_min);
  Produto();

  bool SetNomeProduto(string s);
  bool SetCodigoProduto(string s);
  bool SetValorProduto(float f);
  bool SetCategoriaProduto(string s);
  bool SetLote_minProduto(int i);
  bool SetEstoque_minProduto(int i);
  string getNomeProduto() const;
  string getCodigoProduto() const;
  float getValorProduto() const;
  string getCategoriaProduto() const;
  int getLote_minProduto() const;
  int getEstoque_minProduto() const;
  vector<MateriaPrima>getMateriasPrimasProduto();
  bool SetMateriaPrimaProduto(MateriaPrima novaMateriaPrima);
  Produto& operator=(Produto& segundo);
  bool operator<(const reference_wrapper<Produto> segundo) const; //Para corrigir um bug de map<>
  //inline bool operator==(Produto& dir);
  bool imprimeProduto();
  
};

#endif