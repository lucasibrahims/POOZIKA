#include "Empresa.hpp"
#include <string.h>
#include <string>
#include <vector>

using namespace std;

Empresa::Empresa(string new_nome, string new_cnpj){
  this->nome = new_nome;
  this->Cnpj = new_cnpj;
}

Empresa::Empresa() {
  nome = "Empresa";
  Cnpj = "";
}

Empresa *Empresa::Instance () {
  if (EmpresaPtr == 0) // if pointer is null...
    EmpresaPtr = new Empresa; // ... create instance
  return(EmpresaPtr);
}

bool ValidacaoCNPJ::linhaValida(const std::string &novoCnpj) const {
  std::regex Cnpj("\\d{2}\\.\\d{3}\\.\\d{3}\\/\\d{4}\\-\\d{2}");
  return std::regex_match(novoCnpj, Cnpj);
}
void ValidacaoCNPJ::processaLinha(const std::string &novoCnpj) const {
  if (!linhaValida(novoCnpj)) {
    throw ExcecaoViolacaoDeRegra("CNPJ invalido");
  }
}


// bool Empresa::dissidioColetivo(float taxa) {
//   for (int i = 0; i < Departamentos.size(); i++) {
//     Departamentos[i].doSomething(); // n sei como acessar
//     departamento.cargo.funcionario :(
//   }
//   return 1;
// }


bool Empresa::setNome(string novoNome) {
  nome = novoNome;
  return 1;
}

bool Empresa::setCnpj(string novoCnpj) {
  ValidacaoCNPJ validacao = ValidacaoCNPJ();
  validacao.processaLinha(novoCnpj);
  Cnpj = novoCnpj;
  return 1;
}

// bool Empresa::setDepartamentos(Departamento novosDepartamentos) {
//   this->Departamentos.push_back(novosDepartamentos);
//   return 1;
// }

bool Empresa::setClienteFisico(ClienteFisico novosClientesFisicos) {
  this->clientesFisicos.push_back(novosClientesFisicos);
  return 1;
}

bool Empresa::setClienteJuridico(ClienteJuridico novosClientesJuridicos) {
  this->clientesJuridicos.push_back(novosClientesJuridicos);
  return 1;
}

string Empresa::getNome() { return nome; }

string Empresa::getCnpj() { return Cnpj; }

// Departamento &Empresa::getDepartamentos(size_t indice) {
//   return this->Departamentos.at(indice);
// }

ClienteFisico &Empresa::getclientesFisicos(size_t indice) {
  return this->clientesFisicos.at(indice);
}

ClienteJuridico &Empresa::getclientesJuridicos(size_t indice) {
  return this->clientesJuridicos.at(indice);
}

Empresa* Empresa::EmpresaPtr(){
  if (EmpresaPtr == 0){
      EmpresaPtr = new Empresa;
    return (EmpresaPtr);
  }
  
}