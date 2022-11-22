#ifndef CLIENTE_H
#define  CLIENTE_H

#include "Pessoa.hpp"
#include "Venda.hpp"
#include <string>
using namespace std;

class Cliente{
  private:
  string nome;
  string cpf;
  string endereco;
  pair<double, double> coordenadas;
  string email;
  string telefone;
  bool clienteFisico;
  vector<Venda> Compras;

  public:

  Cliente(string nome,
  string cpf,
   string endereco,
   pair<double, double> coordenadas,
   string email,
   string telefone, 
  bool cliente_fisico);
  Cliente();
  string ExportarAtributos();
  bool SetComprasCliente(vector<Venda> compras);
  bool SetCompraCliente(Venda compra);
  vector<Venda> getComprasCliente() const;

};

#endif