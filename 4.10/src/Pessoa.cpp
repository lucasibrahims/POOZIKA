<<<<<<< HEAD:4.10/src/Pessoa.cpp
#include <regex>
#include <string.h>
#include <string>

#include "Pessoa.hpp"
#include "Validacao.hpp"

using namespace std;

/// FUNCOES AUXILIARES///

bool ValidacaoCPF::linhaValida(const std::string& str) const {
  std::regex exp("\\d{3}\\.\\d{3}\\.\\d{3}\\-\\d{2}");
  return std::regex_match(str, exp);
}

void ValidacaoCPF::processaLinha(const std::string& str) const {
  if (!linhaValida(str)) {
    throw ExcecaoViolacaoDeRegra("CPF invalido");
  }
}

bool validarEmail(const std::string email) {
  // define a regular expression
  const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

  // try to match the string with the regular expression
  return std::regex_match(email, pattern);
}

////SETTERS////

bool Pessoa::SetNomePessoa(string new_name) {
  nome = new_name;
  return 1;
}

bool Pessoa::SetCpfPessoa(string new_cpf) {
  
  ValidacaoCPF validacao = ValidacaoCPF();
  if(validacao.linhaValida(new_cpf)){
    cpf = new_cpf;
    return 1;
  } else {
    throw ExcecaoCpfInvalido("Cpf Invalido");
    return 0;
  }

}

bool Pessoa::SetEnderecoPessoa(string new_endereco) {
  this->endereco = new_endereco;
  return 1;
}

bool Pessoa::SetCoordenadasPessoa(float x, float y) {
  pair<float, float> c(x, y);
  coordenadas = c;
  return 0;
}

bool Pessoa::SetEmailPessoa(string new_email) {
  if (validarEmail(new_email)) {
    this->email = new_email;
    return 1;
  } else {
    return 0;
  }
}

bool Pessoa::SetTelefonePessoa(string new_telefone) {
  this->telefone = new_telefone;
  return 1;
}

////GETTERS////

string Pessoa::getNomePessoa() { return nome; }

string Pessoa::getCpfPessoa() { return cpf; }

string Pessoa::getEnderecoPessoa() { return endereco; }

pair<float, float> Pessoa::getCoordenadasPessoa() { return coordenadas; }

string Pessoa::getEmailPessoa() { return email; }

string Pessoa::getTelefonePessoa() { return telefone; }
=======
#include <regex>
#include <string.h>
#include <string>

#include "Pessoa.hpp"
#include "Validacao.hpp"

using namespace std;

/// FUNCOES AUXILIARES///

bool ValidacaoCPF::linhaValida(const std::string& str) const {
  std::regex exp("\\d{3}\\.\\d{3}\\.\\d{3}\\-\\d{2}");
  return std::regex_match(str, exp);
}

void ValidacaoCPF::processaLinha(const std::string& str) const {
  if (!linhaValida(str)) {
    throw ExcecaoViolacaoDeRegra("CPF invalido");
  }
}

bool validarEmail(const std::string email) {
  // define a regular expression
  const std::regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

  // try to match the string with the regular expression
  return std::regex_match(email, pattern);
}

////SETTERS////

bool Pessoa::SetNomePessoa(string new_name) {
  nome = new_name;
  return 1;
}

bool Pessoa::SetCpfPessoa(string new_cpf) {
  
  ValidacaoCPF validacao = ValidacaoCPF();
  if(validacao.linhaValida(new_cpf)){
    cpf = new_cpf;
    return 1;
  } else {
    throw ExcecaoCpfInvalido("Cpf Invalido");
    return 0;
  }

}

bool Pessoa::SetEnderecoPessoa(string new_endereco) {
  this->endereco = new_endereco;
  return 1;
}

bool Pessoa::SetCoordenadasPessoa(float x, float y) {
  pair<float, float> c(x, y);
  coordenadas = c;
  return 0;
}

bool Pessoa::SetEmailPessoa(string new_email) {
  if (validarEmail(new_email)) {
    this->email = new_email;
    return 1;
  } else {
    return 0;
  }
}

bool Pessoa::SetTelefonePessoa(string new_telefone) {
  this->telefone = new_telefone;
  return 1;
}

////GETTERS////

string Pessoa::getNomePessoa() { return nome; }

string Pessoa::getCpfPessoa() { return cpf; }

string Pessoa::getEnderecoPessoa() { return endereco; }

pair<float, float> Pessoa::getCoordenadasPessoa() { return coordenadas; }

string Pessoa::getEmailPessoa() { return email; }

string Pessoa::getTelefonePessoa() { return telefone; }
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Pessoa.cpp
