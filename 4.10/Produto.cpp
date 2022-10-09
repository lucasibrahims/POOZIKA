#include "Produto.hpp"
#include "Estoque.cpp"
#include <string.h>
#include <string>

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

  bool Produto::SetEstoque(Estoque E) {
    this->estoque=E;
    return 1;
  }
  string Produto::getNome() {
    return nome;
  }
  string Produto::getCodigo() {
    return codigo;
  }
  float Produto::getValor() {
    return valores.back();
  }
  string Produto::getCategoria() {
    return categoria;
  }
  int Produto::getLote_min() {
    return lote_min;
  }
  int Produto::getEstoque_min() {
    return estoque_min;
  }
  Estoque Produto::getEstoque() {
    return estoque;
  }