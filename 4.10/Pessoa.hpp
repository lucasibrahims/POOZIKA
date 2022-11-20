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
  pair<float, float> coordenadas;
  string email;
  string telefone;

  public:
  
  bool SetNomePessoa(string s);
  bool SetCpfPessoa(string s);
  bool SetEnderecoPessoa(string s);
  bool SetCoordenadasPessoa(float x, float y);
  bool SetEmailPessoa(string s);
  bool SetTelefonePessoa(string s);
  string getNomePessoa();
  string getCpfPessoa();
  string getEnderecoPessoa();
  pair<float, float> getCoordenadasPessoa();
  string getEmailPessoa();
  string getTelefonePessoa();
};

#endif