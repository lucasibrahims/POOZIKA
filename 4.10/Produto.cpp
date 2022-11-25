#include "Produto.hpp"
#include <string.h>
#include <string>
#include <vector>
#include <iostream>
#include "MateriaPrima.hpp"



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

    nome = segundo.getNomeProduto();
    codigo = segundo.getCodigoProduto();
    categoria = segundo.getCategoriaProduto();
    lote_min = segundo.getLote_minProduto();
    estoque_min = segundo.getEstoque_minProduto();

    return *this;
  }

  bool Produto::operator<(const reference_wrapper<Produto> segundo) const {
    return 1;
  }

   // inline bool operator==(Produto& dir) {
  //   if(codigo == dir.getCodigo()) return true;

  //   return false;
  // }
  


  bool Produto::SetNomeProduto(string s) {
    this->nome = s;
    return 1;
  }
  bool Produto::SetCodigoProduto(string s) {
    this->codigo = s;
    return 1;
  }
  bool Produto::SetValorProduto(float f) {
    valores.push_back(f);
    return 1;
  }
  bool Produto::SetCategoriaProduto(string s) {
    this->categoria = s;
    return 1;
  }
  bool Produto::SetLote_minProduto(int i) {
    this->lote_min = i;
    return 1;
  }
  
  bool Produto::SetEstoque_minProduto(int i) {
    this->estoque_min = 1;
    return 1;
  }

  string Produto::getNomeProduto() const {
    return nome;
  }
  string Produto::getCodigoProduto() const {
    return codigo;
  }
  float Produto::getValorProduto() const {
    return valores.back();
  }
  string Produto::getCategoriaProduto() const {
    return categoria;
  }
  int Produto::getLote_minProduto() const {
    return lote_min;
  }
  
  int Produto::getEstoque_minProduto() const {
    return estoque_min;
  }
 
  bool Produto::imprimeProduto() {
    cout << endl;
    cout << "Dados do produto: " << endl;
    cout << "Nome: " << this->getNomeProduto() << endl;
    cout << "Categoria: " << this->getCategoriaProduto() << endl;
    cout << "Codigo: " << this->getCodigoProduto() << endl;
    cout << "Ultimo valor: " << this->getValorProduto() << endl;
    cout << "Estoque minimo: " << this->getEstoque_minProduto() << endl;
    cout << "Lote minimo: " << this->getLote_minProduto() << endl;
    

    return 0;
  }

  bool Produto::SetMateriaPrimaProduto(MateriaPrima novaMateriaPrima) {
  this->materiasPrimas.push_back(novaMateriaPrima);
  return 1;
  }

  vector<MateriaPrima> Produto::getMateriasPrimasProduto() {
    return materiasPrimas;
  }



 