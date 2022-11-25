<<<<<<< HEAD:4.10/src/Funcionarios.cpp
#include "Funcionarios.hpp"

#include <ostream>
#include <string>
#include "Data.hpp"
#include <vector>
#include "Usuario.hpp"
#include <iostream>

  bool Funcionarios::setMatricula(string Matricula) {
    matricula=Matricula;
    return 1;
  }  

  bool Funcionarios::setDataNascimento(Data dataNascimento){
    DataNascimento = dataNascimento;
    return 1;
  }

  bool Funcionarios::setSalario(float salario, Data aumentoSalarioData){
    return 1;
  }

  bool Funcionarios::Admitir(Data dataAdmissao){
    this->Historico.push_back(dataAdmissao);
    return 1;
  }

  bool Funcionarios::Demitir(Data dataDemissao){

    this->Historico.push_back(dataDemissao);
    return 1; 
  }

  bool Funcionarios::Promover(Data dataPromocao){
    return 1;
  }

  bool Funcionarios::SetHorarioOnibus(Data d) {
    horario_onibus = d;
    return 0;
  }

  Data Funcionarios::getHorarioOnibus() {
    return horario_onibus;
  }

  Funcionarios::Funcionarios(string nome_, string cpf_, string matricula_, float coord_x, float coord_y) {
    SetNomePessoa(nome_);
    SetCpfPessoa(cpf_);
    matricula = matricula_;
    SetCoordenadasPessoa(coord_x, coord_y);
  }
  // validação do singleton

Funcionarios::Funcionarios(){
  cout <<Usuario::instanciaUsuario() << endl;
=======
#include "Funcionarios.hpp"

#include <ostream>
#include <string>
#include "Data.hpp"
#include <vector>
#include "Usuario.hpp"
#include <iostream>

  bool Funcionarios::setMatricula(string Matricula) {
    matricula=Matricula;
    return 1;
  }  

  bool Funcionarios::setDataNascimento(Data dataNascimento){
    DataNascimento = dataNascimento;
    return 1;
  }

  bool Funcionarios::setSalario(float salario, Data aumentoSalarioData){
    return 1;
  }

  bool Funcionarios::Admitir(Data dataAdmissao){
    this->Historico.push_back(dataAdmissao);
    return 1;
  }

  bool Funcionarios::Demitir(Data dataDemissao){

    this->Historico.push_back(dataDemissao);
    return 1; 
  }

  bool Funcionarios::Promover(Data dataPromocao){
    return 1;
  }

  bool Funcionarios::SetHorarioOnibus(Data d) {
    horario_onibus = d;
    return 0;
  }

  Data Funcionarios::getHorarioOnibus() {
    return horario_onibus;
  }

  Funcionarios::Funcionarios(string nome_, string cpf_, string matricula_, float coord_x, float coord_y) {
    SetNomePessoa(nome_);
    SetCpfPessoa(cpf_);
    matricula = matricula_;
    SetCoordenadasPessoa(coord_x, coord_y);
  }
  // validação do singleton

Funcionarios::Funcionarios(){
  cout <<Usuario::instanciaUsuario() << endl;
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Funcionarios.cpp
}