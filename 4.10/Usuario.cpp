#include "Usuario.hpp"

Usuario *Usuario::UsuarioPtr = 0;

Usuario *Usuario::instanciaUsuario() {
  if(UsuarioPtr == 0)
    UsuarioPtr = new Usuario;
  return UsuarioPtr;
}



