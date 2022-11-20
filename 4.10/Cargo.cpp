#include "Cargo.hpp"
#include <iostream> 
#include <string>
#include "Empresa.hpp"
#include <fstream>
#include "Funcionarios.hpp"
#include "Usuario.hpp"

// include headers that implement a archive in simple text format
// #include <boost/archive/text_oarchive.hpp>
// #include <boost/archive/text_iarchive.hpp>

Cargo::Cargo(string nome){
this->nome = nome;
}
Cargo::Cargo(){
nome = "";
}

;

void Cargo::SetNomeCargo(string _nome){
    // int count = 0;
    // cout << count << endl;
    // cout << Usuario::instanciaUsuario()->permissoes().size() << endl;
    // auto iter = Usuario::instanciaUsuario()->permissoes().begin();
    // for (iter ; iter != Usuario::instanciaUsuario()->permissoes().end(); iter++) {
    //   cout << count + "1" << endl;
    //   if(iter->first == "SetNome" && iter->second == 1){
    //       this->nome = _nome;
    //       count++;
    //       cout << "Usuario com permissao!"<< endl;
    //   }
      
      
    // }
    // cout <<"To aqui" << endl;
    // cout << count + "ok" << endl;
    // if(count == 0){
    //   cout << "Usuario sem permissao!"<< endl;
      
    // }
    map<string, bool>::iterator ptr;
   
    
    int count = 0;
    for (ptr = Usuario::instanciaUsuario()->permissoes().begin(); ptr != Usuario::instanciaUsuario()->permissoes().end(); ptr++){       
        if(ptr->first == "SetNomeCargo" && ptr->second == 1){
          this->nome = _nome;
          count++;
          cout << "Usuario com permissao!"<< endl;
        }
        cout << count << endl;
        if(prev(Usuario::instanciaUsuario()->permissoes().end()) == ptr && count == 0){
          cout << "Usuario sem permissao para logar no sistema!" << endl;
        }
        
    }
}

bool Cargo::SetFuncionarios(Funcionarios _funcionario){
  funcionarios.push_back(_funcionario);
  return 1;
  }
vector<Funcionarios> Cargo::getFuncionarios()
{
   return this->funcionarios;
}

string Cargo::getNomeCargo(){
  return this->nome;
  }

