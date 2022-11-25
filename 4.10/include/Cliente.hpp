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

<<<<<<< HEAD:4.10/include/Cliente.hpp
  Cliente(string nome_, string cpf_, bool cliente_fisico_);
=======
  Cliente(string nome,
  string cpf,
   string endereco,
   pair<double, double> coordenadas,
   string email,
   string telefone, 
  bool cliente_fisico);
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Cliente.hpp
  Cliente();
  string ExportarAtributos();
  bool SetComprasCliente(vector<Venda> compras);
  bool SetCompraCliente(Venda compra);
  vector<Venda> getComprasCliente() const;

};

#endif