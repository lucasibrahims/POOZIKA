#include "Rota.hpp"

using namespace std;

class Veiculo {
    string placa;
    string cor;
    int capacidade_max;
    Rota* rota;

    public:
    bool SetPlaca(string p);
    string getPlaca();
    bool SetCor(string c);
    string getCor();
    bool SetCapacidadeMax(int c);
    int getCapacidadeMax();
    bool SetRota(Rota* r);

    Veiculo(string placa_, string cor_="", int cap_max=0);
    bool operator==(Veiculo& dir);
};