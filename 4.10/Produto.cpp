#include "Produto.hpp"
#include <string.h>
#include <string>
#include <vector>
#include <iostream>

  using namespace std;

  Produto::Produto() {

  nome = "";
  codigo = "";
    std::vector<float> v(1,0);
  valores = v;
  categoria = "";
  lote_min = 0;
  estoque_min = 0;

  }

  Produto::Produto(string n, string cod, vector<float> val, string cat, 
          int l_min, int est_min) {
  nome = n;
  codigo = cod;
  valores = val;
  categoria = cat;
  lote_min = l_min;
  estoque_min = est_min;

  }

  Produto& Produto::operator=(Produto& segundo) {
    //if(this == &segundo) return this;

    nome = segundo.getNome();
    codigo = segundo.getCodigo();
    categoria = segundo.getCategoria();
    lote_min = segundo.getLote_min();
    estoque_min = segundo.getEstoque_min();

    return *this;
  }

  bool Produto::operator<(const reference_wrapper<Produto> segundo) const {
    return 1;
  }

   // inline bool operator==(Produto& dir) {
  //   if(codigo == dir.getCodigo()) return true;

  //   return false;
  // }
  


  bool Produto::SetNome(string s) {
    this->nome = s;
    return 1;
  }
  bool Produto::SetCodigo(string s) {
    this->codigo = s;
    return 1;
  }
  bool Produto::SetValor(float f) {
    valores.push_back(f);
    return 1;
  }
  bool Produto::SetCategoria(string s) {
    this->categoria = s;
    return 1;
  }
  bool Produto::SetLote_min(int i) {
    this->lote_min = i;
    return 1;
  }
  
  bool Produto::SetEstoque_min(int i) {
    this->estoque_min = 1;
    return 1;
  }

  string Produto::getNome() const {
    return nome;
  }
  string Produto::getCodigo() const {
    return codigo;
  }
  float Produto::getValor() const {
    return valores.back();
  }
  string Produto::getCategoria() const {
    return categoria;
  }
  int Produto::getLote_min() const {
    return lote_min;
  }
  
  int Produto::getEstoque_min() const {
    return estoque_min;
  }
 
  bool Produto::imprimeProduto() {
    cout << endl;
    cout << "Dados do produto: " << endl;
    cout << "Nome: " << this->getNome() << endl;
    cout << "Categoria: " << this->getCategoria() << endl;
    cout << "Codigo: " << this->getCodigo() << endl;
    cout << "Ultimo valor: " << this->getValor() << endl;
    cout << "Estoque minimo: " << this->getEstoque_min() << endl;
    cout << "Lote minimo: " << this->getLote_min() << endl;
    

    return 0;
  }


 