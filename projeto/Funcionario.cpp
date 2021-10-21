#include "Funcionario.h"

#include <iostream>

namespace dados{

//Construtores e Destrutores
Funcionario::Funcionario(){
    tipo = "funcionario";
}

Funcionario::~Funcionario(){
    //dtor
}

//Gets e Sets
std::string Funcionario::getCargo(){
    return cargo;
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setCargo(std::string cargo){
    this->cargo = cargo;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}
//Metodos
void Funcionario::preencheCadastro(){
    cout << "Informe o nome do funcionario: ";
    getline(cin, nome);
    cout << "Informe o CPF do funcionario: ";
    getline(cin, cpf);
    cout << "Informe o salario do Funcionario: ";
    cin >> salario;
    cin.ignore();
    cout << "Informe o cargo do Funcionario: ";
    getline(cin, cargo);
    cout << "Informe agora o endereco do funcionario" << endl;
    cout <<"Rua: ";
    getline(cin, endereco.rua);
    cout << "Numero: ";
    cin >> endereco.numero;
    cin.ignore();
    cout << "Bairro: ";
    getline(cin, endereco.bairro);
}
void Funcionario::exibeCadastro(){
    cout << "Nome: " << nome << endl;
    cout << "CPF: " << cpf << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Salario: " << salario << endl;
    cout << "Endereco: Rua " << endereco.rua << " - " << endereco.numero << ", " << endereco.bairro << endl << endl;
}
void Funcionario::removeCadastro(){
    nome = "";
    cpf = "";
    cargo = "";
    salario = 0;
}
void Funcionario::atualizaCadastro(){
    cout << "Informe o novo salario do funcionario: ";
    cin >> salario;
    cin.ignore();
    cout << "Informe o novo cargo do funcionario: ";
    getline(cin, cargo);
}
}


