#ifndef  ESTOQUE_HPP
#define  ESTOQUE_HPP

#include <vector>
#include <map>
#include "Lote.hpp"
#include "MateriaPrima.hpp"

using namespace std;

class Estoque{

  vector<Lote> lotesAtuais;
  vector<Lote> lotesAntigos;
  map<MateriaPrima*, float> MPQnt;

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
  bool AdicionaMP(MateriaPrima* MP, float qnt_por_prod);
  bool RemoveMP(MateriaPrima* MP);
  float getQntMP(MateriaPrima* MP);
  bool AtualizaMP();
};


#endif