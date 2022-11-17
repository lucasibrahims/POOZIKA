#ifndef  LOGABS_HPP
#define  LOGABS_HPP

#include <vector>
#include "Empresa.hpp"
#include "Data.hpp"
#include "Usuario.hpp"

class LogAbstrata{
    private:
    Usuario *usuario;
    Data data;
    string entidade;
    LogAbstrata(Data _data, string _entidade);

    public:
    void setData(Data _data);
    void setEntidade(string _entidade);
    Usuario *getUsuario();
    Data getData();
    string getEntidade();
};

#endif