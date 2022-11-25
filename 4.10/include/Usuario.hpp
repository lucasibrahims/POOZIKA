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
  void usuarioLogado(string LoginCpf, Cargo *cargo);
  void SetPermissao( string classe ,bool permissão  );
  void GetPermissao();
  map<string,bool> permissoes();
};