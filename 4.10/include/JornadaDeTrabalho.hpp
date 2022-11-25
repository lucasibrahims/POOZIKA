#ifndef JORNADADETRABALHO_HPP
#define JORNADADETRABALHO_HPP

#include <ostream>
#include <vector>
#include <string>
#include <map>
#include "Data.hpp"
#include "Pessoa.hpp"
#include <vector>

using namespace std;

class Jornada{
    private:
    string turno;
    //Data Horario(pair<Data inicio ,Data fim>); // hora de inicio e fim
    public:
    void SetTurno(string);
    void SetHorário(pair<Data,Data>);
    void GetTurno();
    void GetHorario();
};


#endif  //JORNADADETRABALHO_HPP