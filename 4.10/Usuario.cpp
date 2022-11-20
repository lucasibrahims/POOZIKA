#include "Usuario.hpp"
#include <iostream>
#include "Cargo.hpp"
#include "Funcionarios.hpp"

Usuario *Usuario::UsuarioPtr = 0;

Usuario *Usuario::instanciaUsuario() {
  if(UsuarioPtr == 0)
    UsuarioPtr = new Usuario;
  return UsuarioPtr;
}
Usuario::Usuario(){
  cout << "Singleton carregado" << endl;

}

void Usuario::usuarioLogado(string LoginCpf_ , Cargo *cargo){
    // 3-Comprovar o funcionamento do singleton do usuário logado.
    vector<Funcionarios> FuncioanriosCpf = cargo->getFuncionarios();
    vector<Funcionarios>::iterator ptr;
    int count = 0;
    for (ptr = FuncioanriosCpf.begin(); ptr != FuncioanriosCpf.end(); ptr++){        
        if (ptr->getCpfPessoa() == LoginCpf_){
                Funcionarios& funcionario = *ptr;
                funcionario.getCpfPessoa();
                cout << "Usuario Logado no Sistema" << endl;                
                Permissoes.insert ( std::pair<string,bool>("SetNomeCargo",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetFuncionarios",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getFuncionarios",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomeCargo",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("ExportarAtributos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomeDepartamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCargosDepartamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEnderecoEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCoordenadasEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("dissidioColetivo",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomeEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCnpjEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getComprasCliente",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetComprasCliente",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCompraCliente",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeDepartamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCargosDepartamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setNomeEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setCnpjEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetEnderecoEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCoordenadasEmpresa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("inserir",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("remover",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("imprimeEstoque",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("AdicionaMP",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("RemoveMP",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getLotesAtuais",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getLotesAntigos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getQntMP",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaMP",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("gerarProposta",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("EfetivarCompra",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setMatricula",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setDataNascimento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setSalario",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getMatrícula",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getDataNascimento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getSalario",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetHorarioOnibus",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getHorarioOnibus",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getHistórico",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Admitir",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Demitir",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Promover",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetTurno",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetHorário",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("GetTurno",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("GetHorario",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setData",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setEntidade",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getUsuario",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getData",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEntidade",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setAtributosAntigos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setAtributosNovos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getAtributosAntigos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getAtributosNovos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getId",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getDataLote",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getQntMin",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getQntAtual",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setQntMin",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("setQntAtual",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("imprimeLote",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomeMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getFornecedores",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("InsertFornecedor",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetQuantidadeMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getQuantidadeMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetEstoqueMinMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEstoqueMinMateriaPrima",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("InsertUnidMed",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetUnidMed",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getUnidMed",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaQnt",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("gerarOrdem",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("validaUnidade",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getProdutos",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("AdicionarFormaDePagamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("RemoverFormaDePagamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Atualizar",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("EfetivarVenda",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getDataOrcamento",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetNomePessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCpfPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetEnderecoPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCoordenadasPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetEmailPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetTelefonePessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomePessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCpfPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEnderecoPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCoordenadasPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEmailPessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getTelefonePessoa",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCodigoProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetValorProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCategoriaProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetLote_minProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetEstoque_minProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getNomeProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCodigoProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getValorProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCategoriaProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getLote_minProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEstoque_minProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getMateriasPrimasProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetMateriaPrimaProduto",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getEfetivada",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Efetivar",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetOfertaUnit",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getOfertaUnit",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("operator==",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetVelocidadeMedia",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getVelocidadeMedia",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getTempoMin",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getDistTotal",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("InsertPassageiro",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getPassageiros",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("RemovePassageiro",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("Rota",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetPlaca",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCor",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCor",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetCapacidadeMax",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("getCapacidadeMax",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("SetRota",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("ValidaQuantidade",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaEstoque",bool(1)));
                Permissoes.insert ( std::pair<string,bool>("ImprimeOrdem",bool(1)));
                count++;
        }
    }
    if (count == 0){
      cout << "Usuario sem permissao para logar no sistema!" << endl;
                Permissoes.insert ( std::pair<string,bool>("SetNomeCargo",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetFuncionarios",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getFuncionarios",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomeCargo",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("ExportarAtributos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomeDepartamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCargosDepartamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEnderecoEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCoordenadasEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("dissidioColetivo",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomeEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCnpjEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getComprasCliente",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetComprasCliente",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCompraCliente",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeDepartamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCargosDepartamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setNomeEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setCnpjEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetEnderecoEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCoordenadasEmpresa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("inserir",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("remover",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("imprimeEstoque",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("AdicionaMP",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("RemoveMP",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getLotesAtuais",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getLotesAntigos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getQntMP",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaMP",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("gerarProposta",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("EfetivarCompra",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setMatricula",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setDataNascimento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setSalario",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getMatrícula",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getDataNascimento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getSalario",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetHorarioOnibus",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getHorarioOnibus",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getHistórico",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Admitir",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Demitir",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Promover",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetTurno",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetHorário",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("GetTurno",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("GetHorario",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setData",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setEntidade",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getUsuario",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getData",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEntidade",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setAtributosAntigos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setAtributosNovos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getAtributosAntigos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getAtributosNovos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getId",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getDataLote",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getQntMin",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getQntAtual",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setQntMin",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("setQntAtual",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("imprimeLote",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomeMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getFornecedores",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("InsertFornecedor",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetQuantidadeMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getQuantidadeMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetEstoqueMinMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEstoqueMinMateriaPrima",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("InsertUnidMed",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetUnidMed",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getUnidMed",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaQnt",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("gerarOrdem",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("validaUnidade",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getProdutos",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("AdicionarFormaDePagamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("RemoverFormaDePagamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Atualizar",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("EfetivarVenda",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getDataOrcamento",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetNomePessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCpfPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetEnderecoPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCoordenadasPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetEmailPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetTelefonePessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomePessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCpfPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEnderecoPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCoordenadasPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEmailPessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getTelefonePessoa",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetNomeProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCodigoProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetValorProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCategoriaProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetLote_minProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetEstoque_minProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getNomeProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCodigoProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getValorProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCategoriaProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getLote_minProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEstoque_minProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getMateriasPrimasProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetMateriaPrimaProduto",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getEfetivada",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Efetivar",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetOfertaUnit",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getOfertaUnit",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("operator==",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetVelocidadeMedia",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getVelocidadeMedia",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getTempoMin",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getDistTotal",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("InsertPassageiro",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getPassageiros",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("RemovePassageiro",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("Rota",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetPlaca",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCor",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCor",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetCapacidadeMax",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("getCapacidadeMax",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("SetRota",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("ValidaQuantidade",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("AtualizaEstoque",bool(0)));
                Permissoes.insert ( std::pair<string,bool>("ImprimeOrdem",bool(0)));
    }
    
}

void Usuario::SetPermissao( string classe_ ,bool permissão_ ){
    auto iter = Permissoes.begin();
    while (iter != Permissoes.end()) {
      if(iter->first == classe_){
        iter->second = permissão_;
      }
      ++iter;
    }
}
void Usuario::GetPermissao(){
    auto iter = Permissoes.begin();
    while (iter != Permissoes.end()) {
        cout << "[" << iter->first << ","
                    << iter->second << "]\n";
        ++iter;
    }
}

map<string,bool> Usuario::permissoes(){
  return Permissoes;
}




