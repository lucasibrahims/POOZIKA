#ifndef CLIENTE_H
#define  CLIENTE_H

#include "Pessoa.hpp"
#include "Venda.hpp"
#include <string>
using namespace std;

class Cliente : public Pessoa{
  private:

  string tipo;
  //vector<Venda> Compras;

  public:

  Cliente(string new_tipo);
  string ExportarAtributos();

};

#endif