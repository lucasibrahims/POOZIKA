#include "Cliente.hpp"
#include <string>

Cliente::Cliente(string nome_, string cpf_, bool cliente_fisico)
{
  clienteFisico = cliente_fisico;
  this->SetNome(nome_);
  this->SetCpf(cpf_);
  
  
}

Cliente::Cliente() {
  clienteFisico = 0;
}

bool Cliente::SetCompras(vector<Venda> compras) {
  for(vector<Venda>::iterator it = compras.begin(); it != compras.end(); it++) {
      Compras.push_back(*it);
  }
  return 0;
}

bool Cliente::SetCompras(Venda compra) {
  Compras.push_back(compra);
  return 0;
}

vector<Venda> Cliente::getCompras() const {
  return Compras;
}

