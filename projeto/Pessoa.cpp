#include "Pessoa.h"

namespace dados{
//Construtores e Destrutores
Pessoa::Pessoa(){
    //ctor
}
Pessoa::~Pessoa(){
    //dtor
}

//Gets e Sets
std::string Pessoa::getNome(){
    return nome;
}

std::string Pessoa::getCpf(){
    return cpf;
}

void Pessoa::setNome(std::string n){
    nome = n;
}

void Pessoa::setCpf(std::string c){
    cpf = c;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}

std::string Pessoa::getTipo(){
    return tipo;
}
}





