#ifndef CLIENTE_H
#define  CLIENTE_H

#include "Pessoa.hpp"
#include "Venda.hpp"
#include <string>
using namespace std;

class Cliente : public Pessoa{
  private:

  bool clienteFisico;
  vector<Venda> Compras;

  // string nome;
  // string cpf;
  // string endereco;
  // pair<float, float> coordenadas;
  // string email;
  // string telefone;

  public:

  Cliente(string nome_, string cpf_, bool cliente_fisico);
  Cliente();
  string ExportarAtributos();
  bool SetCompras(vector<Venda> compras);
  bool SetCompras(Venda compra);
  vector<Venda> getCompras() const;

};

#endif