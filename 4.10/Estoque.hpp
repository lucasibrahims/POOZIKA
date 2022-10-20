#ifndef  ESTOQUE_HPP
#define  ESTOQUE_HPP

#include <vector>
#include "Lote.hpp"

using namespace std;

class Estoque{

  vector<Lote> lotesAtuais;
  vector<Lote> lotesAntigos;

public:
  Estoque(vector<Lote> l_atuais, vector<Lote> l_antigos);
  Estoque(vector<Lote> l_atuais);
  Estoque();

  void inserir(Lote l);
  void remover(Lote l);
  int getEstoqueTotal();
  vector<Lote> getLotesAtuais();
  vector<Lote> getLotesAntigos();
  void imprimeEstoque();
};


#endif