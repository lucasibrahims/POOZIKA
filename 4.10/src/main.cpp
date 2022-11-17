#include <iostream>
#include <map>
// #include "Orcamento.hpp"
#include "Produto.hpp"
// #include "Lote.hpp"
// #include "Estoque.hpp"
// #include "Venda.hpp"
// #include "Data.hpp"
// #include "Cliente.hpp"
#include "Funcionarios.hpp"
#include "Cliente.hpp"
using namespace std;

/*
Instanciar um objeto da classe Empresa.
◦Instanciar um objeto de um usuário logado que deverá ter
permissão de acesso à todas as funcionalidades, exceto ao
método que realiza a exclusão de um funcionário.
◦Comprovar o funcionamento do singleton do usuário logado.
◦Cadastrar três funcionários. 
Cadastrar dois clientes, sendo um PF e outro PJ.
◦Cadastrar o produto Mesa (estoque mínimo: 20 unidades), que,
para sua produção, necessita das matérias-primas e quantidades
abaixo, que também devem ser cadastradas.
    ▪ Madeira: 450g (estoque mínimo: 1 Kg)
    ▪ Plástico: 150g (estoque mínimo: 1 Kg)
    ▪ Alumínio: 100g (estoque mínimo: 1 Kg)
    ▪ Parafusos: 8 unidades (estoque mínimo: 20 unidades)
◦Devem ser produzidos lotes de mesa para atender o estoque
mínimo
◦Tentar excluir um funcionário cadastrado no sistema
◦O cliente PJ deve solicitar um orçamento para aquisição de 10
mesas. Em função da previsão de falta de matéria-prima, após a
geração desse orçamento, o preço da mesa deve sofrer um
aumento de 5%. Em seguida o cliente decide adquirir as 10
mesas, mesmo após o aumento.
◦Deve ser cadastrada a rota de um veículo para transporte dos três
funcionários cadastrados trabalharem no turno da manhã que se
inicia às 8h. Devem ver exibidos os horários em que cada
funcionário deverá embarcar.
◦Por fim, deve-se exibir os logs de todas as operações realizadas.
*/


int main() {

    //CADASTRAR 3 FUNCIONARIOS 
Funcionarios Marcus("Marcus Aurelius Antoninus", "87309836288", "MARC2022", 100.0, 200.0);
Funcionarios Tiberio("Tibério César Augusto", "49096401000", "TIBE2022", 50.0, 80.0);
Funcionarios Nero("Nero Cláudio César Augusto Germânico", "59829863050", "NERO2022", 25.0, 35.0);

    //CADASTRAR 2 CLIENTES
Cliente Elton("Elton Marques", "41682014061", 1);
Cliente SpaceY("SpaceY ltda", "29701267000198", 0);

    //CADASTRANDO O PRODUTO "MESA"
vector<float> v[300];
Produto Mesa("Mesa", "MSMS9102", v, "Móveis", 100, 500);

//(string nome, string codigo, vector<float> valores, string categoria, 
//          int lote_min, int estoque_min)



    // vector<float> v1(1, 32.20);
    // vector<float> v2(1, 5.0);

    // Data d1(2022, 10, 5, 2, 30, 0);
    // Data d2(2022, 8, 10, 2, 30, 0);
    // Data d3(2022, 4, 17, 2, 30, 0);

    // // //Criando produtos para testes
    // Produto QueijoMinas("Queijo Minas", "AB3F43", v1, "Alimentos", 100, 300);
    // Produto Ketchup("Ketchup", "BGGFD32", v2, "Alimentos", 100, 50);
    // Produto FitaCrepe("Fita Crepe", "99UIUDF3", v1, "Utilidades", 1000, 100);


    // Lote Lote21(d2, "4141", Ketchup.getLote_min(), 300, Ketchup);
    // Lote Lote22(d2, "4242", Ketchup.getLote_min(), 300, Ketchup);
    // Lote Lote23(d3, "3043", Ketchup.getLote_min(), 300, Ketchup);
    //      vector<Lote> LotesAtuais2;
    //      LotesAtuais2.push_back(Lote21);
    //      LotesAtuais2.push_back(Lote22);
    //      LotesAtuais2.push_back(Lote23);

    //  Lote Lote31(d3, "5050", FitaCrepe.getLote_min(), 3000, FitaCrepe);
    //      vector<Lote> LotesAtuais3;
    //     LotesAtuais3.push_back(Lote31);

    // //Criando cada estoque
    //  Estoque Estoque2(LotesAtuais2);
    //  Estoque Estoque3(LotesAtuais3);

    // Estoque2.imprimeEstoque();
    // Estoque3.imprimeEstoque();


    // map<Produto*, pair<int, float>> prod;
    // pair<int, float> p(10, QueijoMinas.getValor()*10);
    // pair<int, float> q(30, Ketchup.getValor()*30);
    // pair<int, float> r(25, FitaCrepe.getValor()*25);

    // prod[&QueijoMinas] = p;
    // prod[&Ketchup] = q;
    // prod[&FitaCrepe] = r;
    
    // Cliente c;

    // Orcamento o(c, prod, d1);
    // o.imprimeOrcamento();

    // QueijoMinas.SetValor(40.0);
    // FitaCrepe.SetValor(100.0);
    
    // map< reference_wrapper<Produto>, pair<int, float>>::iterator it = o.getProdutos().begin();
    // cout << it->first.get().getValor();

    // if( !o.Atualizar() ) cout << "Orcamento desatualizado foi corrigido" << endl;
    // o.imprimeOrcamento();

};
