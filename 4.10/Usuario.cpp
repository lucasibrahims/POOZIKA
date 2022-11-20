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

void Usuario::usuarioLogado(string LoginCpf_ , Cargo *cargo){
    // 3-Comprovar o funcionamento do singleton do usuário logado.
    vector<Funcionarios> FuncioanriosCpf = cargo->getFuncionarios();
    vector<Funcionarios>::iterator ptr;
    cout <<LoginCpf_<< endl;
    int count = 0;
    for (ptr = FuncioanriosCpf.begin(); ptr != FuncioanriosCpf.end(); ptr++){        
        if (ptr->getCpf() == LoginCpf_){
                Funcionarios& funcionario = *ptr;
                funcionario.getCpf();
                cout << "Usuario Logado no Sistema" << endl;
                //Permissoes.insert ( std::pair<string,bool>("excluirFuncionario",bool(1)));
                count++;
        }

    }
    if (count == 0){
      cout << "Usuario sem permissao para logar no sistema!" << endl;
    }
    

}



