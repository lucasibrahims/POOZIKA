#include "Venda.hpp"

 Venda::Venda(Data data, Produto prod, int qnt, vector<Lote> lotes) {
   //Validar disponibilidade (qnt < qnt em estoque)
   if (!ValidaQuantidade(qnt, prod) ) {
     //Quantidade insuficiente, lançar exceção
   }

   //Atualizar estoque

   //Imprimir a ordem de produção
   //if(prod.getEstoque().getEstoqueTotal() < prod.){}
 }
bool Venda::ValidaQuantidade(int qnt, Produto prod) {
  //Validar disponibilidade (qnt < qnt em estoque)
   if (qnt > prod.getEstoque().getEstoqueTotal() ) {
     return 0;
   } else {
     return 1;
   }
  }


void Venda::AtualizaEstoque(){
  if (this->ValidaQuantidade(this->quantidade, this->produto) == 1){

    vector<Lote> lotesAtuais = this->produto.getEstoque().getLotesAtuais();
    
      lotesAtuais.front() = this->produto.QntAtual - this->quantidade;

      if(this->produto.getEstoque().getEstoqueTotal() - this->quantidade < this->produto.QntMin){
          this->ImprimeOrdem();
      }
  }
}

void Venda::ImprimeOrdem(){
  Lote ordem {this->data,"ordem", this->produto, this->produto.QntMin, this->produto.lote_min};   //Rever string!!! 
  
}