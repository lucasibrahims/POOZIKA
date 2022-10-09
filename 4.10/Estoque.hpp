#ifndef  ESTOQUE_HPP
#define  ESTOQUE_HPP
#include <vector>
#include "Lote.hpp"

using namespace std;

class Estoque{
vector<Lote> lotesAtuais;
vector<Lote> lotesAntigos;

public:
  void inserir(Lote l);
  void remover(Lote l);
  int getEstoqueTotal();
  vector<Lote> getLotesAtuais();
};


#endif