#ifndef  EMPRESA_HPP
#define  EMPRESA_HPP

#include <vector>
#include "ClienteJuridico.hpp"
#include "ClienteFisico.hpp"
#include "Validacao.hpp"

using namespace std;

class Empresa{
  private:
    string nome;
    string Cnpj;
    //vector<Departamento> Departamentos;
    vector<ClienteFisico> clientesFisicos;
    vector<ClienteJuridico> clientesJuridicos;
    static Empresa* EmpresaPtr;
    Empresa(string nome, string Cnpj);
    Empresa();
    


  public:
    static Empresa* Instance();
    bool setNome(string);
    bool setCnpj(string);
    //bool setDepartamentos(Departamento Departamentos);
    bool setClienteFisico(ClienteFisico ClientesFisicos);
    bool setClienteJuridico(ClienteJuridico ClientesJuridicos);
    bool dissidioColetivo(float taxa);
    string getNome();    
    string getCnpj();
    //Departamento& getDepartamentos(size_t indice);
    ClienteFisico& getclientesFisicos(size_t indice);
    ClienteJuridico& getclientesJuridicos(size_t indice);
    
  

  


};
#endif