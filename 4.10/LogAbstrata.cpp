#include "LogAbstrata.hpp"
#include <string.h>
#include <string>
#include <vector>

using namespace std;

LogAbstrata::LogAbstrata(Data _data, string _entidade)
{
    this->usuario = Usuario::instanciaUsuario();
    this->data = _data;
    this->entidade = _entidade;
}

void LogAbstrata::setData(Data _data)
{
    this->data = _data;
}


void LogAbstrata::setEntidade(string _entidade)
{
    this->entidade = _entidade;
}

Usuario *LogAbstrata::getUsuario()
{
    return this->usuario;
}


string LogAbstrata::getEntidade()
{
    return this->entidade;
}

Data LogAbstrata::getData()
{
    return this->data;
}

