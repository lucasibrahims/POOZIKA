#include <string>
#include <map>

using namespace std;

class Usuario {

  string LogicCpf;
  string LoginSenha;
  map<string,bool> Permissoes;
  static Usuario *UsuarioPtr;
  Usuario(); //Construtor privado

  public:
  static Usuario *instanciaUsuario();
  
};