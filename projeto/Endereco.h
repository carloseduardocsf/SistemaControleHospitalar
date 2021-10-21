#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

namespace dados{

class Endereco
{
    public:
        Endereco();
        virtual ~Endereco();

        int getNumero();
        std::string getRua();
        std::string getBairro();
        void setNumero(int numero);
        void setRua(std::string rua);
        void setBairro(std::string bairro);

    //protected:
        int numero;
        std::string rua;
        std::string bairro;
};

}

#endif // ENDERECO_H



