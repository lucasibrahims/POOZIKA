#ifndef   CARGO_H
#define  CARGO_H
#include <string>

#include "Funcionarios.hpp"
#include "Cliente.hpp"
#include "Empresa.hpp"
#include <string>

using namespace std;
class Cargo{   
  private:

  string nome;
  vector<Funcionarios> funcionarios;

  public:

  Cargo(string nome);
  bool SetNome(string _nome);
  bool SetFuncionarios(Funcionarios _funcionario);
  string getNome();
  vector<Funcionarios> getFuncionarios();
};
#endif