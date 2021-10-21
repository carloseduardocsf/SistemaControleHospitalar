#include "Endereco.h"

namespace dados{

Endereco::Endereco(){
    //ctor
}

Endereco::~Endereco(){
    //dtor
}

//Gets e Sets
int Endereco::getNumero(){
    return numero;
}

std::string Endereco::getRua(){
    return rua;
}

std::string Endereco::getBairro(){
    return bairro;
}

void Endereco::setNumero(int numero){
    this->numero = numero;
}

void Endereco::setRua(std::string rua){
    this->rua = rua;
}

void Endereco::setBairro(std::string bairro){
    this->bairro = bairro;
}

}


