#include <string.h>
#include <string>
#include "Estoque.hpp"
#include <vector>


Estoque::Estoque(vector<Lote> l_atuais, vector<Lote> l_antigos) {
  lotesAtuais = l_atuais;
  lotesAntigos = l_antigos;
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
    lotesAtuais.erase(lotesAtuais.begin());
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