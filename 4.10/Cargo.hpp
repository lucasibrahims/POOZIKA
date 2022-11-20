#ifndef   CARGO_H
#define  CARGO_H
#include <string>

#include "Funcionarios.hpp"
#include "Cliente.hpp"
#include "Empresa.hpp"
#include "Data.hpp"

#include <string>

using namespace std;
class Cargo{   
  private:

  string nome;
  vector<Funcionarios> funcionarios;


  public:
  Cargo();
  Cargo(string nome);
  void SetNomeCargo(string _nome);
  bool SetFuncionarios(Funcionarios _funcionario);
  string getNomeCargo();
  vector<Funcionarios> getFuncionarios();
};
#endif