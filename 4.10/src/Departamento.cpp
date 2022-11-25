<<<<<<< HEAD:4.10/src/Departamento.cpp
#include "Departamento.hpp"

Departamento::Departamento (string _nome){
  this->nome = _nome;
}

bool Departamento::SetNomeDepartamento(string _nome)
{
  this->nome = _nome;
  return true;
}

string Departamento::getNomeDepartamento(){
  return this->nome;
}
bool Departamento::SetCargosDepartamento(Cargo _cargo)
{
  cargos.push_back(_cargo);
  return true;
}
vector<Cargo> Departamento::getCargosDepartamento()
{
  return this->cargos;
=======
#include "Departamento.hpp"

Departamento::Departamento (string _nome){
  this->nome = _nome;
}

bool Departamento::SetNomeDepartamento(string _nome)
{
  this->nome = _nome;
  return true;
}

string Departamento::getNomeDepartamento(){
  return this->nome;
}
bool Departamento::SetCargosDepartamento(Cargo _cargo)
{
  cargos.push_back(_cargo);
  return true;
}
vector<Cargo> Departamento::getCargosDepartamento()
{
  return this->cargos;
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Departamento.cpp
}