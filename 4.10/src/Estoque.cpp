#include <string.h>
#include <string>
#include "Estoque.hpp"
#include <vector>
#include <iostream>

using namespace std;


Estoque::Estoque(vector<Lote> l_atuais, vector<Lote> l_antigos) {
  lotesAtuais = l_atuais;
  lotesAntigos = l_antigos;
}

Estoque::Estoque(vector<Lote> l_atuais) {
  lotesAtuais = l_atuais;
  vector<Lote> v2;
  lotesAntigos = v2;
}

Estoque::Estoque() {
  vector<Lote> v1;
  vector<Lote> v2;

  lotesAtuais = v1;
  lotesAntigos = v2;
}


void Estoque::inserir(Lote novolote){
    lotesAtuais.push_back(novolote);
    lotesAntigos.push_back(novolote);
  }


void Estoque::remover(Lote l){
  for (vector<Lote>::iterator it = lotesAtuais.begin(); it != 
    lotesAtuais.end(); it++){
    
      if(l.getId() == it->getId()) {
         this->getLotesAtuais().erase(it);
         break;
      }
  }
}

int Estoque::getEstoqueTotal() {
  int estoque=0;
  for(vector<Lote>::iterator it = lotesAtuais.begin(); it != 
      lotesAtuais.end(); it++) {
    
    estoque += it->getQntAtual();
  }

  return estoque;
}

vector<Lote> Estoque::getLotesAtuais()
{
  return this->lotesAtuais;
}

vector<Lote> Estoque::getLotesAntigos()
{
  return this->lotesAntigos;
}

void Estoque::imprimeEstoque() {

  cout << endl << "Estoque de " << lotesAtuais.front().getProduto().getNomeProduto() << endl;

  for (vector<Lote>::iterator it = lotesAtuais.begin(); it != lotesAtuais.end(); it++)
  {
    int i = 0;
    cout << "---- " << "Lote " << i << " ----" << endl;
    it->imprimeLote();
  }
  

}

      // Metodos de Materia Prima

  bool Estoque::AdicionaMP(MateriaPrima* MP, float qnt_por_prod) {
    MPQnt[MP] = qnt_por_prod;
    return 0;
  }

  bool Estoque::RemoveMP(MateriaPrima* MP) {
    MPQnt.erase(MP);
    return 0;
  }

  float Estoque::getQntMP(MateriaPrima* MP) {
    return MPQnt[MP];
  }

  bool Estoque::InsertLote(Lote l) {
    lotesAtuais.push_back(l);
    return 0;
  }
/*
  bool Estoque::AtualizaMP() {
    //for(map<MateriaPrima*, float>)
  }

 bool Estoque::AtualizaMP() {

}*/