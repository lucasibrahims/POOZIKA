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
  Produto(string nome, string codigo, vector<float> valores, string categoria, 
          int lote_min, int estoque_min);
  Produto();

  bool SetNome(string s);
  bool SetCodigo(string s);
  bool SetValor(float f);
  bool SetCategoria(string s);
  bool SetLote_min(int i);
  bool SetEstoque_min(int i);
  string getNome() const;
  string getCodigo() const;
  float getValor() const;
  string getCategoria() const;
  int getLote_min() const;
  int getEstoque_min() const;

  Produto& operator=(Produto& segundo);
  bool operator<(const Produto& segundo) const; //Para corrigir um bug de map<>
  //inline bool operator==(Produto& dir);
  bool imprimeProduto();
  
};

#endif