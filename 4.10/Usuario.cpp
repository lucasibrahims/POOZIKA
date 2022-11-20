#include "Usuario.hpp"
#include <iostream>
#include "Cargo.hpp"
#include "Funcionarios.hpp"

Usuario *Usuario::UsuarioPtr = 0;

Usuario *Usuario::instanciaUsuario() {
  if(UsuarioPtr == 0)
    UsuarioPtr = new Usuario;
  return UsuarioPtr;
}
Usuario::Usuario(){
  cout << "Singleton carregado" << endl;

}

bool Usuario::usuarioLogado(string LoginCpf_){
vector<Funcionarios> FuncioanriosCpf = cargo.getFuncionarios();
vector<Funcionarios>::iterator ptr;
for (ptr = FuncioanriosCpf.begin(); ptr < FuncioanriosCpf.end(); ptr++){
  if (ptr->getCpf() == LoginCpf_){
        cout << "Usuario Logado no Sistema" << endl;
        return 1;
  }
}
cout << "Usuario sem premissão para logar no sistema" << endl; 
return 1;   
}



