#include "Cliente.hpp"
#include <string>

Cliente::Cliente(bool cliente_fisico){
  clienteFisico = cliente_fisico;
}

Cliente::Cliente() {
  clienteFisico = 0;
}