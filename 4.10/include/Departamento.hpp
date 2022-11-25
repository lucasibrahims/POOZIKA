<<<<<<< HEAD:4.10/include/Departamento.hpp
#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

using namespace std;
#include <ostream>
#include <string>
#include "Cargo.hpp"

class Departamento {
private:
string nome;
vector<Cargo> cargos;

public:
Departamento (string _nome);
bool SetNomeDepartamento(string _nome);
bool SetCargosDepartamento(Cargo _cargos);
string getNomeDepartamento();
vector<Cargo> getCargosDepartamento();

};


=======
#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

using namespace std;
#include <ostream>
#include <string>
#include "Cargo.hpp"

class Departamento {
private:
string nome;
vector<Cargo> cargos;

public:
Departamento (string _nome);
bool SetNomeDepartamento(string _nome);
bool SetCargosDepartamento(Cargo _cargos);
string getNomeDepartamento();
vector<Cargo> getCargosDepartamento();

};


>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Departamento.hpp
#endif