#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"
#include <string>

using namespace std;

namespace dados{

class Pessoa
{
    public:
        Pessoa();
        virtual ~Pessoa();

        std::string getNome();
        std::string getCpf();
        void setNome(std::string n);
        void setCpf(std::string c);

        Endereco getEndereco();
        void setEndereco(Endereco endereco);

        std::string getTipo();

        virtual void preencheCadastro()=0;
        virtual void exibeCadastro()=0;
        virtual void removeCadastro()=0;
        virtual void atualizaCadastro()=0;

    protected:
        std::string nome;
        std::string cpf;
        std::string tipo;
        Endereco endereco;
};

}
#endif // PESSOA_H





