#include "Paciente.h"

#include <iostream>
//using namespace std;

namespace dados{
//Construtores e Destrutores
Paciente::Paciente(){
    tipo = "paciente";
}

Paciente::~Paciente(){
    //dtor
}

//Gets e Sets
int Paciente::getIdade(){
    return idade;
}

char Paciente::getSexo(){
    return sexo;
}

string Paciente::getSituacao(){
    return situacao;
}

void Paciente::setIdade(int i){
    idade = i;
}

void Paciente::setSexo(char s){
    sexo = s;
}

void Paciente::setSituacao(string s){
    situacao = s;
}

//Metodos
void Paciente::preencheCadastro(){
    cout << "Informe o nome do paciente: ";
    getline(cin, nome);
    cout << "Informe a idade do paciente: ";
    cin >> idade;
    getchar();
    cout << "Informe o sexo do paciente: ";
    cin >> sexo;
    getchar();
    cout << "Informe o CPF do paciente: ";
    getline(cin, cpf);
    cout << "Informe a situacao do paciente: ";
    getline(cin, situacao);
    cout << "Informe agora o endereco do paciente" << endl;
    cout <<"Rua: ";
    getline(cin, endereco.rua);
    cout << "Numero: ";
    cin >> endereco.numero;
    cin.ignore();
    cout << "Bairro: ";
    getline(cin, endereco.bairro);
}
void Paciente::exibeCadastro(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Situacao: " << situacao << endl;
    cout << "Endereco: Rua " << endereco.rua << " - " << endereco.numero << ", " << endereco.bairro << endl << endl;
}
void Paciente::removeCadastro(){
    nome = "";
    idade = 0;
    sexo = '0';
    cpf = "";
    situacao = "";
}
void Paciente::atualizaCadastro(){
    cout << "Informe a situacao atual do paciente " << nome << ": ";
    getline(cin,situacao);
}

}