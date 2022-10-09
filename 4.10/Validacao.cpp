#include "Validacao.hpp"

bool ValidacaoCPF::linhaValida(const std::string& str) const {
  std::regex exp("\\d{3}\\.\\d{3}\\.\\d{3}\\-\\d{2}");
  return std::regex_match(str, exp);
}

void ValidacaoCPF::processaLinha(const std::string& str) const {
  if (!linhaValida(str)) {
    throw ExcecaoViolacaoDeRegra("CPF invalido");
  }
}

bool ValidacaoCNPJ::linhaValida(const std::string& str) const {
  std::regex exp("\\d{2}\\.\\d{3}\\.\\d{3}\\/\\d{4}\\-\\d{2}");
  return std::regex_match(str, exp);
}

void ValidacaoCNPJ::processaLinha(const std::string& str) const {
  if (!linhaValida(str)) {
    throw ExcecaoViolacaoDeRegra("CNPJ invalido");
  }
}
