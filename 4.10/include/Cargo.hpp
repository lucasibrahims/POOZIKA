<<<<<<< HEAD:4.10/include/Cargo.hpp
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
=======
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
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Cargo.hpp
#endif