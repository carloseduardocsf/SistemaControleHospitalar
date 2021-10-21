#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"

namespace dados{

class Funcionario : public Pessoa
{
    public:
        Funcionario();
        virtual ~Funcionario();

        std::string getCargo();
        float getSalario();
        void setCargo(std::string cargo);
        void setSalario(float salario);

        void preencheCadastro();
        void exibeCadastro();
        void removeCadastro();
        void atualizaCadastro();

    private:
        std::string cargo;
        float salario;
};

#endif // FUNCIONARIO_H

}







