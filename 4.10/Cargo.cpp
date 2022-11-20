#include "Cargo.hpp"
#include <iostream> 
#include <string>
#include "Empresa.hpp"
#include <fstream>
#include "Funcionarios.hpp"

// include headers that implement a archive in simple text format
// #include <boost/archive/text_oarchive.hpp>
// #include <boost/archive/text_iarchive.hpp>

Cargo::Cargo(string nome){
this->nome = nome;
}
Cargo::Cargo(){
nome = "";
}
bool Cargo::SetNome(string _nome){
  this->nome = _nome;
  return 1;
  
}

bool Cargo::SetFuncionarios(Funcionarios _funcionario){
  funcionarios.push_back(_funcionario);
  return 1;
  }
vector<Funcionarios> Cargo::getFuncionarios()
{
   return this->funcionarios;
}

string Cargo::getNome(){
  return this->nome;
  }

