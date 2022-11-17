#ifndef  LOGESC_HPP
#define  LOGESC_HPP

#include <vector>
#include "LogAbstrata.hpp"

class LogEscrita: public LogAbstrata
{
    private:
    string atributosAntigos;
    string atributosNovos;

    public:
    LogEscrita(Data _data, string _entidade, string _atributosAntigos);
    void setAtributosAntigos(string _atributosAntigos);
    void setAtributosNovos(string _atributosNovos);
    string getAtributosAntigos();
    string getAtributosNovos();

};

#endif
