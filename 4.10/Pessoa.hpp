#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class ExcecaoCpfInvalido {
  string message;

  public:
    ExcecaoCpfInvalido(string s) : message(s) {}
};



class Pessoa {
  string nome;
  string cpf;
  string endereco;
  string email;
  string telefone;

  public:
  
  bool SetNome(string s);
  bool SetCpf(string s);
  bool SetEndereco(string s);
  bool SetEmail(string s);
  bool SetTelefone(string s);
  string getNome();
  string getCpf();
  string getEndereco();
  string getEmail();
  string getTelefone();
};

#endif