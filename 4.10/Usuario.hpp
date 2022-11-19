#include <string>
#include <map>

using namespace std;

class Usuario {

  string LoginCpf;
  string LoginSenha;
  map<string,bool> Permissoes;
  static Usuario *UsuarioPtr;
  Usuario(); //Construtor privado

  public:
  char getch();
  static Usuario *instanciaUsuario();
  
};