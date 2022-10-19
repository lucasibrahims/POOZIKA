#include <iostream>
#include "Produto.hpp"
#include "Lote.hpp"
#include "Estoque.hpp"

using namespace std;

int main() {

    vector<float> v1(1, 32.20);
    vector<float> v2(1, 5.0);

    Data d1(2022, 10, 5, 2, 30, 0);
    Data d2(2022, 8, 10, 2, 30, 0);
    Data d3(2022, 4, 17, 2, 30, 0);

    //Criando produtos para testes
    Produto QueijoMinas("Queijo Minas", "AB3F43", v1, "Alimentos", 100, 300);
    Produto Ketchup("Ketchup", "BGGFD32", v2, "Alimentos", 100, 50);
    Produto FitaCrepe("Fita Crepe", "99UIUDF3", v1, "Utilidades", 1000, 100);

    //Criando um lote para cada
    Lote Lote1(d1, "3030", QueijoMinas.getLote_min(), 500, QueijoMinas);
    Lote Lote2(d2, "4040", Ketchup.getLote_min(), 300, Ketchup);
    Lote Lote3(d3, "5050", FitaCrepe.getLote_min(), 3000, FitaCrepe);


};
