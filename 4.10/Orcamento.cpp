#include "Orcamento.hpp"

using namespace std;

string p[] = {"Boleto em 30 dias", "Boleto em 60 dias", "Boleto em 90 dias", 
                "Cartao a vista", "Cartao em 2x", "Cartao em 3x", "Cartao em 4x", "Cartao em 5x", "Cartao em 6x", "Pix"};
set<std::string> Orcamento::formasDePagamento(p, p+10);

Orcamento::Orcamento(Cliente c, map<Produto, int> prod, Data d) {
    cliente = c; //Conferir se o cliente ja foi cadastrado
    produtos = prod;
    data = d;

    //Calculando o orcamento
    for(map<Produto,int>::iterator it = produtos.begin(); it != produtos.end(); it++) {
        float valorUnit = it->first.getValor();
        int quantidade = it->second;

        valorTotal[it->first] = valorUnit * quantidade;
    }

}

bool Orcamento::AdicionarFormaDePagamento(string str) {

    if( formasDePagamento.find(str) != formasDePagamento.end() ) return 1; // Metodo ja existe na lista

    formasDePagamento.insert(str);
    return 0;

}

bool Orcamento::RemoverFormaDePagamento(string str) {

    if (formasDePagamento.find(str) == formasDePagamento.end() ) return 1; //Metodo nao existe na lista

    formasDePagamento.erase(str);
    return 0;

}
    // bool EfetivarVenda(Data d, std::string forma_pag);

Data Orcamento::getData() {
    return data;
}

void Orcamento::imprimeOrcamento() {
    map<Produto, float>::const_iterator it = valorTotal.begin();

    cout << "---- Orcamento de " << it->first.getNome() << " ----" << endl;
    cout << "Valores vigentes no dia " << data.getData() << endl;

    for(;it != valorTotal.end(); it++) {
        cout << it->first.getNome() << ": R$" << it->second << endl;
    }
}