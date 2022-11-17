#ifndef VALIDACAO_HPP
#define VALIDACAO_HPP

#include <exception>
#include <regex>
#include <string>

class ExcecaoViolacaoDeRegra : public std::exception {
 protected:
  std::string message;

 public:
  ExcecaoViolacaoDeRegra(const std::string e)
      : message(e) {
  }
  virtual const char* what() {
    return message.c_str();
  }
};

class Validacao {
 public:
  virtual bool linhaValida(const std::string& str) const = 0;
  virtual void processaLinha(const std::string& str) const = 0;
};

class ValidacaoCPF : public Validacao {
 public:
  bool linhaValida(const std::string& str) const override;
  void processaLinha(const std::string& str) const override;
};

class ValidacaoCNPJ : public Validacao {
 public:
  bool linhaValida(const std::string& str) const override;
  void processaLinha(const std::string& str) const override;
};

#endif  // VALIDACAO_HPP
