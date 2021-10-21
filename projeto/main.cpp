#include <iostream>
#include <string.h>

#include "Paciente.h"
#include "Funcionario.h"

using namespace std;
using namespace dados;

void exibeMenuGeral(){
    cout << "Informe com qual menu voce deseja interagir" << endl;
    cout << "Opcao 1 - Funcionarios" << endl;
    cout << "Opcao 2 - Pacientes" << endl;
    cout << "Opcao 3 - Sair" << endl;
}

void exibeMenuFuncionario(){
    cout << endl << "Opcao 1 - Listar Funcionarios" << endl;
    cout << "Opcao 2 - Exibir Cadastro" << endl;
    cout << "Opcao 3 - Atualizar Cadastro" << endl;
    cout << "Opcao 4 - Cadastrar Funcionario" << endl;
    cout << "Opcao 5 - Remover Funcionario" << endl;
    cout << "Opcao 6 - Sair" << endl << endl;
}

void exibeMenuPaciente(){
    cout << endl << "Opcao 1 - Listar Pacientes" << endl;
    cout << "Opcao 2 - Exibir Prontuario" << endl;
    cout << "Opcao 3 - Atualizar Prontuario" << endl;
    cout << "Opcao 4 - Cadastrar Paciente" << endl;
    cout << "Opcao 5 - Remover Paciente" << endl;
    cout << "Opcao 6 - Sair" << endl << endl;
}

int main() {
    int opcaoGeral = 1, opcao = 3, nPacientes = 0, nFuncionarios = 0, flag, tipo;
    string qualPessoa;
    Endereco endereco;
    Pessoa *pessoa[2][99];

    //Funcionarios iniciais
    pessoa[0][0] = new Funcionario();
    pessoa[0][0]->setNome("Sandra Sandeiro");
    pessoa[0][0]->setCpf("888.123.423-78");
    ((Funcionario *)pessoa[0][0])->setCargo("medico(a)");
    ((Funcionario *)pessoa[0][0])->setSalario(15000);
    endereco.setRua("Cristovao");
    endereco.setNumero(444);
    endereco.setBairro("Miramar");
    pessoa[0][0]->setEndereco(endereco);
    nFuncionarios++;

    pessoa[0][1] = new Funcionario();
    pessoa[0][1]->setNome("Pedro Peugeot");
    pessoa[0][1]->setCpf("444.333.222-53");
    ((Funcionario *)pessoa[0][1])->setCargo("enfermeiro(a)");
    ((Funcionario *)pessoa[0][1])->setSalario(8000);
    endereco.setRua("Ricardo Pereira");
    endereco.setNumero(888);
    endereco.setBairro("Estados");
    pessoa[0][1]->setEndereco(endereco);
    nFuncionarios++;

    //Pacientes iniciais
    pessoa[1][0] = new Paciente();
    pessoa[1][0]->setNome("Mauro Castro");
    ((Paciente *)pessoa[1][0])->setIdade(20);
    ((Paciente *)pessoa[1][0])->setSexo('M');
    pessoa[1][0]->setCpf("123.987.650-98");
    ((Paciente *)pessoa[1][0])->setSituacao("O paciente esta tomando soro");
    endereco.setRua("Epitacio Pessoa");
    endereco.setNumero(726);
    endereco.setBairro("Manaira");
    pessoa[1][0]->setEndereco(endereco);
    nPacientes++;

    pessoa[1][1] = new Paciente();
    pessoa[1][1]->setNome("Ana Pereira");
    ((Paciente *)pessoa[1][1])->setIdade(32);
    ((Paciente *)pessoa[1][1])->setSexo('F');
    pessoa[1][1]->setCpf("765.384.658-36");
    ((Paciente *)pessoa[1][1])->setSituacao("Paciente acordou com enxaqueca");
    endereco.setRua("Edson Ramalho");
    endereco.setNumero(217);
    endereco.setBairro("Brisamar");
    pessoa[1][1]->setEndereco(endereco);
    nPacientes++;

    pessoa[1][2] = new Paciente();
    pessoa[1][2]->setNome("Carlos Pereira");
    ((Paciente *)pessoa[1][2])->setIdade(19);
    ((Paciente *)pessoa[1][2])->setSexo('M');
    pessoa[1][2]->setCpf("543.123.564-78");
    ((Paciente *)pessoa[1][2])->setSituacao("Paciente recebeu alta");
    endereco.setRua("Maria Rosa");
    endereco.setNumero(562);
    endereco.setBairro("Torre");
    pessoa[1][2]->setEndereco(endereco);
    nPacientes++;

    pessoa[1][3] = new Paciente();
    pessoa[1][3]->setNome("Ana Leite");
    ((Paciente *)pessoa[1][3])->setIdade(12);
    ((Paciente *)pessoa[1][3])->setSexo('F');
    pessoa[1][3]->setCpf("543.123.564-78");
    ((Paciente *)pessoa[1][3])->setSituacao("Paciente anestesiada");
    endereco.setRua("Paola Carvalho");
    endereco.setNumero(943);
    endereco.setBairro("Expedicionarios");
    pessoa[1][3]->setEndereco(endereco);
    nPacientes++;

    //Menu
    do{
        if(opcaoGeral>=1 && opcaoGeral<=3)
            exibeMenuGeral();
        cin >> opcaoGeral;
        switch (opcaoGeral){
            case 1: //Funcionarios
                do{
                    tipo = 0;
                    if(opcao>=1 && opcao<=6)
                        exibeMenuFuncionario();
                    cin >> opcao;
                    cin.ignore();
                    switch (opcao){
                        case 1:
                            if(nPacientes==0){
                                cout << "Nao ha nenhum funcionario, e necessario cadastrar algum antes" << endl;
                                break;
                            }
                            for(int i = 0; i<nFuncionarios; i++)
                                cout << i+1 << " - " << pessoa[tipo][i]->getNome() << endl;
                            break;
                        case 2:
                            cout << "Digite o nome do funcionario que voce deseja exibir: ";
                            getline(cin, qualPessoa);
                            flag = 0;
                            for(int i = 0; i<nFuncionarios ;i++)
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    pessoa[tipo][i]->exibeCadastro();
                                    flag=1;
                                }
                            if(!flag)
                                cout << "Funcionario nao encontrado" << endl;
                            break;
                        case 3:
                            cout << "Digite o nome do funcionario que voce deseja atualizar: ";
                            getline(cin, qualPessoa);
                            flag=0;
                            for(int i = 0; i<nFuncionarios; i++)
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    ((Funcionario *)pessoa[tipo][i])->atualizaCadastro();
                                    flag=1;
                                    break;
                                }
                            if(!flag)
                                cout << "Funcionario nao encontrado" << endl;
                            break;
                        case 4:
                            nFuncionarios++;
                            pessoa[tipo][nFuncionarios - 1] = new Funcionario();
                            pessoa[tipo][nFuncionarios - 1]->preencheCadastro();
                            break;
                        case 5:
                            cout << "Informe o nome do funcionario que sera removido: ";
                            getline(cin, qualPessoa);
                            flag = 0;
                            for(int i = 0; i<nFuncionarios; i++){
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    flag=1;
                                }
                                if(flag && i != nFuncionarios - 1){
                                    pessoa[tipo][i]->setNome(pessoa[tipo][i+1]->getNome());
                                    pessoa[tipo][i]->setCpf(pessoa[tipo][i+1]->getCpf());
                                    ((Funcionario *)pessoa[tipo][i])->setCargo(((Funcionario *)pessoa[tipo][i+1])->getCargo());
                                    ((Funcionario *)pessoa[tipo][i])->setSalario(((Funcionario *)pessoa[tipo][i+1])->getSalario());
                                    //
                                    ((Funcionario *)pessoa[tipo][i])->setEndereco(((Funcionario *)pessoa[tipo][i+1])->getEndereco());
                                }
                            }
                            if(flag){
                                nFuncionarios--;
                                //pessoa[tipo][nFuncionarios]->removeCadastro();
                                if(pessoa[tipo][nFuncionarios] != NULL){
                                    delete pessoa[tipo][nFuncionarios];
                                    pessoa[tipo][nFuncionarios] =  NULL;
                                }
                            }
                            else
                                cout << "Funcionario nao encontrado" << endl;
                            break;
                        case 6:
                            cout << "Retornando para o menu principal..." << endl << endl;
                            break;
                        default:
                                cout << "Numero invalido, digite um numero valido: ";
                            }

                }while(opcao!=6);
                break;
            case 2: //Pacientes
                do{
                    tipo = 1;
                    if(opcao>=1 && opcao<=6)
                        exibeMenuPaciente();
                    cin >> opcao;
                    cin.ignore();
                    switch (opcao){
                        case 1:
                            if(nPacientes==0){
                                cout << "Nao ha nenhum paciente, e necessario cadastrar algum antes" << endl;
                                break;
                            }
                            for(int i = 0; i<nPacientes; i++)
                                cout << i+1 << " - " << pessoa[tipo][i]->getNome() << endl;
                            break;
                        case 2:
                            cout << "Digite o nome do paciente que voce deseja exibir: ";
                            getline(cin, qualPessoa);
                            flag = 0;
                            for(int i = 0; i<nPacientes ;i++)
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    pessoa[tipo][i]->exibeCadastro();
                                    flag=1;
                                }
                            if(!flag)
                                cout << "Paciente nao encontrado" << endl;
                            break;
                        case 3:
                            cout << "Digite o nome do paciente que voce deseja atualizar: ";
                            getline(cin, qualPessoa);
                            //getchar();
                            flag=0;
                            for(int i = 0; i<nPacientes; i++)
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    ((Paciente *)pessoa[tipo][i])->atualizaCadastro();
                                    flag=1;
                                    break;
                                }
                            if(!flag)
                                cout << "Paciente nao encontrado" << endl;
                            break;
                        case 4:
                            nPacientes++;
                            pessoa[tipo][nPacientes - 1] = new Paciente();
                            pessoa[tipo][nPacientes - 1]->preencheCadastro();
                            break;
                        case 5:
                            cout << "Informe o nome do paciente que sera removido: ";
                            getline(cin, qualPessoa);
                            flag = 0;
                            for(int i = 0; i<nPacientes; i++){
                                if(pessoa[tipo][i]->getNome().find(qualPessoa) != string::npos){
                                    flag=1;
                                }
                                if(flag && i != nPacientes - 1){
                                    pessoa[tipo][i]->setNome(pessoa[tipo][i+1]->getNome());
                                    ((Paciente *)pessoa[tipo][i])->setIdade(((Paciente *)pessoa[tipo][i+1])->getIdade());
                                    ((Paciente *)pessoa[tipo][i])->setSexo(((Paciente *)pessoa[tipo][i+1])->getSexo());
                                    pessoa[tipo][i]->setCpf(pessoa[tipo][i+1]->getCpf());
                                    ((Paciente *)pessoa[tipo][i])->setSituacao(((Paciente *)pessoa[tipo][i+1])->getSituacao());
                                    //
                                    ((Paciente *)pessoa[tipo][i])->setEndereco(((Paciente *)pessoa[tipo][i+1])->getEndereco());
                                }
                            }
                            if(flag){
                                nPacientes--;
                                //pessoa[tipo][nPacientes]->removeCadastro();
                                if(pessoa[tipo][nPacientes] != NULL){
                                    delete pessoa[tipo][nPacientes];
                                    pessoa[tipo][nPacientes] =  NULL;
                                }
                            }
                            else
                                cout << "Paciente nao encontrado" << endl;
                            break;
                        case 6:
                            cout << "Retornando para o menu principal..." << endl << endl;
                            break;
                        default:
                                cout << "Numero invalido, digite um numero valido: ";
                            }
                }while(opcao!=6);
                break;
            case 3:
                cout << "Obrigado por usar nosso sistema de controle de hospitais!!" << endl;
                break;
            default:
                cout << "Numero invalido, digite um numero valido: ";
        }

    }while(opcaoGeral != 3);
    return 0;
}




