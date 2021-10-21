#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>

using namespace std;

namespace dados{

class Paciente
{
    public:
        Paciente();
        string getNome();
        int getIdade();
        char getSexo();
        string getCpf();
        string getSituacao();
        void setNome(string n);
        void setIdade(int i);
        void setSexo(char s);
        void setCpf(string c);
        void setSituacao(string s);

        void preencherCadastro();
        void exibePaciente();
        void removeCadastro();
        void atualizaSituacao();
        //string procuraNome(string n);

    private:
        string nome;
        int idade;
        char sexo;
        string cpf;
        string situacao;
};

}







