#include "Orcamento.hpp"

using namespace std;

string p[] = {"Boleto em 30 dias", "Boleto em 60 dias", "Boleto em 90 dias", 
                "Cartao a vista", "Cartao em 2x", "Cartao em 3x", "Cartao em 4x", "Cartao em 5x", "Cartao em 6x", "Pix"};
set<std::string> Orcamento::formasDePagamento(p, p+10);

Orcamento::Orcamento(Cliente c, map<Produto, int> prod, Data d) {
    cliente = c; //Conferir se o cliente ja foi cadastrado

    for(map<Produto, int>::iterator it = prod.begin(); it != prod.end(); it++) {
        
        pair<int, float> QntPreco(it->second, it->second * it->first.getValor());
        produtos[it->first] = QntPreco;

    }

    data = d;

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

// bool Orcamento::Atualizar() {
//     map<Produto, int>::iterator tra

//     //Confere se os preços regitrados com os atuais
//     for(map<Produto, float>::iterator it = valorTotal.begin(); it != valorTotal.end(); it++) {
//         float old_valorU = it->second / 

//     }

// }

bool Orcamento::EfetivarVenda(Data d, std::string forma_pag) {
    //Conferir se o método de pagamento é válido
    if( formasDePagamento.find(forma_pag) == formasDePagamento.end()) return 1;

    //Conferir a validade dos preços do orçamento


}

Data Orcamento::getData() {
    return data;
}

void Orcamento::imprimeOrcamento() {
    map<Produto, pair<int, float>>::iterator it = produtos.begin();

    cout << "---- Orcamento de " << it->first.getNome() << " ----" << endl;
    cout << "Valores vigentes no dia " << data.getData() << endl;

    for(;it != produtos.end(); it++) {
        cout << it->first.getNome() << ": " << it->second.first << " unidade(s) por R$" << it->second.second << endl;

    }
}