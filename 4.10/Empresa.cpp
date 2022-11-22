#include "Empresa.hpp"
#include <string.h>
#include <string>
#include <vector>

using namespace std;

Empresa::Empresa(string new_nome, string new_cnpj){
  this->nome = new_nome;
  this->Cnpj = new_cnpj;
}

//Empresa::Empresa() {
 // nome = "Empresa";
  //Cnpj = "";
//}
Empresa *Empresa::EmpresaPtr = 0;

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


bool Empresa::setNomeEmpresa(string novoNome) {
  nome = novoNome;
  return 1;
}

bool Empresa::setCnpjEmpresa(string novoCnpj) {
  ValidacaoCNPJ validacao = ValidacaoCNPJ();
  validacao.processaLinha(novoCnpj);
  Cnpj = novoCnpj;
  return 1;
}

// bool Empresa::setDepartamentos(Departamento novosDepartamentos) {
//   this->Departamentos.push_back(novosDepartamentos);
//   return 1;
// }

bool Empresa::setClienteFisico(Cliente novosClientesFisicos) {
  this->clientesFisicos.push_back(novosClientesFisicos);
  return 1;
}

bool Empresa::setClienteJuridico(Cliente novosClientesJuridicos) {
  this->clientesJuridicos.push_back(novosClientesJuridicos);
  return 1;
}

string Empresa::getNomeEmpresa() { return nome; }

string Empresa::getCnpjEmpresa() { return Cnpj; }

// Departamento &Empresa::getDepartamentos(size_t indice) {
//   return this->Departamentos.at(indice);
// }

Cliente &Empresa::getclientesFisicos(size_t indice) {
  return this->clientesFisicos.at(indice);
}

Cliente &Empresa::getclientesJuridicos(size_t indice) {
  return this->clientesJuridicos.at(indice);
}

bool Empresa::SetEnderecoEmpresa(string end) {
  endereco = end;
  return 0;
}

string Empresa::getEnderecoEmpresa() {
  return endereco;
}

bool Empresa::SetCoordenadasEmpresa(double x, double y) {
  pair<double,double> p(x, y);
  coordenadas = p;
  return 0;
}

pair<float,float> Empresa::getCoordenadasEmpresa() {
  return coordenadas;
}