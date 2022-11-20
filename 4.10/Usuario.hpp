#include <string>
#include <map>
#include "Cargo.hpp"

using namespace std;

class Usuario {

  string LoginCpf;
  string LoginSenha;
  map<string,bool> Permissoes;
  static Usuario *UsuarioPtr;
  Usuario(); //Construtor privado
  Cargo cargo;

  public:
  char getch();
  static Usuario *instanciaUsuario();
  bool usuarioLogado(string LoginCpf);
};