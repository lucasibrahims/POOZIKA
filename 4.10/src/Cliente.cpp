#include "Cliente.hpp"
#include <string>

Cliente::Cliente(string nome_, string cpf_, bool cliente_fisico_)
{
  clientefisico_ = cliente_fisico;
  this->SetNomePessoa(nome_);
  this->SetCpfPessoa(cpf_);
}

Cliente::Cliente() {
  clienteFisico = 0;
}

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

