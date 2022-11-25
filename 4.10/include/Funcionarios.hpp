#ifndef FUNCIONARIOS_HPP
#define FUNCIONARIOS_HPP

#include <ostream>
#include <vector>
#include <string>
#include <map>
#include "Data.hpp"
#include "Pessoa.hpp"
#include <vector>


class Funcionarios : public Pessoa {
private:
  std::string matricula;
  Data DataNascimento;
  vector <Data> Historico;
  map <string, Data> Salario;
  Data horario_onibus;
  bool ativo;

public:
  float salarioInicial;
  bool setMatricula(string Matricula);
  bool setDataNascimento(Data dataNascimento);
  bool setSalario (float salario, Data aumentoSalarioData);
  std::string getMatrícula();
  Data getDataNascimento();
  float getSalario();
  bool SetHorarioOnibus(Data d);
  Data getHorarioOnibus();
  float getHistórico();
  bool Admitir(Data dataAdmissao);
  bool Demitir(Data dataDemissao);
  bool Promover(Data dataPromocao);

  Funcionarios(string nome_, string cpf_, string matricula_, float coord_x=0, float coord_y=0);
  Funcionarios();

};

#endif  // FUNCIONARIOS_HPP