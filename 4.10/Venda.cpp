#include "Venda.hpp"

 Venda::Venda(Data data, Produto prod, int qnt, vector<Lote> LotesComprados, Estoque estoque) {
   //Validar disponibilidade (qnt < qnt em estoque)
   if (!ValidaQuantidade(qnt, prod) ) {
     //Quantidade insuficiente, lançar exceção
   }

   //Atualizar estoque

   //Imprimir a ordem de produção
   //if(prod.getEstoque().getEstoqueTotal() < prod.){}
 }
bool Venda::ValidaQuantidade(int qnt) {
  //Validar disponibilidade (qnt < qnt em estoque)
   if (qnt > this->estoque.getEstoqueTotal() ) {
     return 0;
   } else {
     return 1;
   }
  }


void Venda::AtualizaEstoque(){
  if (this->ValidaQuantidade(this->quantidade) == 1){
    // lote[1] =30 
    // lote[2] = 20
    // lote 3 = 45
    // quantidade = 40
    for(int i = 0; i<this->estoque.getLotesAtuais().size(); i++)
    {
      if (quantidade>this->estoque.getLotesAtuais().front().getQntAtual())
      {
        estoque.getLotesAtuais().front().setQntAtual(0);
        estoque.getLotesAtuais().erase(estoque.getLotesAtuais().begin());

      }else {
        int quantidadeFinal=estoque.getLotesAtuais().front().getQntAtual() - quantidade;
        estoque.getLotesAtuais().front().setQntAtual(quantidadeFinal);
      }
    }
      if(this->produto.getEstoque().getEstoqueTotal() - this->quantidade < this->produto.QntMin){
          this->ImprimeOrdem();
      }
  }
}

void Venda::ImprimeOrdem(){
  Lote ordem {this->data,"ordem", this->produto, this->produto.QntMin, this->produto.lote_min};   //Rever string!!! 
  
}