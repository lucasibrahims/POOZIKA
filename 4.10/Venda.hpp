#ifndef VENDA_HPP
#define VENDA_HPP

#include "Data.hpp"
#include "Lote.hpp"
#include "Produto.hpp"
#include <vector>
#include "Empresa.hpp"
#include "ClienteJuridico.hpp"
class Venda {
  private:
  Data data;
  Produto produto;
  int quantidade;
  vector<Lote> LotesComprados;


  public:
  Venda(Data data, Produto prod, int qnt, vector<Lote> lotes); //Constructor
  bool ValidaQuantidade (int qnt, Produto prod);
  void AtualizaEstoque();
  void ImprimeOrdem();

};
#endif