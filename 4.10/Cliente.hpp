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

  public:

  Cliente(bool cliente_fisico);
  Cliente();
  string ExportarAtributos();
  bool SetComprasCliente(vector<Venda> compras);
  bool SetCompraCliente(Venda compra);
  vector<Venda> getComprasCliente() const;

};

#endif