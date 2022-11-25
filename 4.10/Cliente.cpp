#include "Cliente.hpp"
#include <string>

Cliente::Cliente(string _nome, string _cpf, string _endereco, pair<double, double> _coordenadas, string _email, string _telefone, bool _clienteFisico){
  this->nome = _nome;
  this->cpf = _cpf;
  this->endereco = _endereco;
  this->coordenadas = _coordenadas;
  this->email = _email;
  this->telefone = _telefone;
  this->clienteFisico = _clienteFisico;
}

Cliente::Cliente() {}


bool Cliente::SetComprasCliente(vector<Venda> compras) {
  for(vector<Venda>::iterator it = compras.begin(); it != compras.end(); it++) {
      Compras.push_back(*it);
  }
  return 0;
}

bool Cliente::SetCompraCliente(Venda compra) {
  Compras.push_back(compra);
  return 0;
}

vector<Venda> Cliente::getComprasCliente() const {
  return Compras;
}

