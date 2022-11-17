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
  
  bool SetNome(string s);
  bool SetCpf(string s);
  bool SetEndereco(string s);
  bool SetCoordenadas(float x, float y);
  bool SetEmail(string s);
  bool SetTelefone(string s);
  string getNome();
  string getCpf();
  string getEndereco();
  pair<float, float> getCoordenadas();
  string getEmail();
  string getTelefone();
};

#endif