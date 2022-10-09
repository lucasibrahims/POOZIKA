#ifndef CLIENTEFISICO_H
#define  CLIENTEFISICO_H

#include "Pessoa.hpp"
#include "Venda.hpp"
#include <string>
using namespace std;

class ClienteFisico : public Pessoa{
  private:

  string tipo;
  vector<Venda> Compras;

  public:

  ClienteFisico(string new_tipo);

};

#endif