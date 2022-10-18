#ifndef VENDA_HPP
#define VENDA_HPP

#include "Data.hpp"
#include "Estoque.hpp"
#include "Produto.hpp"
#include <vector>
#include "ClienteJuridico.hpp"
class Venda {
  private:
  Data data;
  Produto produto;
  int quantidade;
  vector<Lote> LotesComprados;
  Estoque estoque;


  public:
  Venda(Data data, Produto prod, int qnt, vector<Lote> LotesComprados, Estoque estoque); //Constructor
  bool ValidaQuantidade (int qnt);
  void AtualizaEstoque();
  void ImprimeOrdem();

};
#endif