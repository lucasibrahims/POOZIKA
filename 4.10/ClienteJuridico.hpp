#ifndef  CLIENTEJURIDICO_H
#define  CLIENTEJURIDICO_H

#include <string>
#include "Venda.hpp"
using namespace std;

class ClienteJuridico{
  private:
  string nome;
  string Cnpj;
  string email;
  string telefone;
  string tipo;
  vector<Venda> Compras;

  public:
  ClienteJuridico(string nome, string tipo);
  bool setNome(string);
  bool setCnpj(string);
  bool setEmail(string);
  bool setTelefone(string);
  string getNome();
  string getCnpj();
  string getEmail();
  string getTelefone();
  string getTipo();


};
#endif