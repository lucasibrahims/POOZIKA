<<<<<<< HEAD:4.10/include/Usuario.hpp
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
=======
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
>>>>>>> e68dd169da1c675680c0b4ece2c15371d9757d06:4.10/Usuario.hpp
};