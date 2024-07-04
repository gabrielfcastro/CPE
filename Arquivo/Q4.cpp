#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream Aluno;
    ifstream Dados;
    string Nome_do_aluno, Caminho, Matricula;
    int Menu, Num_de_notas, Resposta;
    float Nota;

    while (true) {
        cout << "\nMenu de selecao: " << endl;
        cout << "1. Cadastro de um aluno." << endl;
        cout << "2. Adicionar nota de um aluno." << endl;
        cout << "3. Calcular media de um aluno." << endl;
        cout << "4. Fechar programa." << endl << endl;

        cin >> Menu;

        switch (Menu) {
            // 1
            case 1:
                cout << "Cadastro de aluno selecionado." << endl << endl;
                cout << "Informe o nome completo do aluno: ";
                cin.ignore(); // Limpar o buffer do cin antes de getline
                getline(cin, Nome_do_aluno);

                Aluno.open("C:\\Users\\Gabriel Francsico\\Desktop\\" + Nome_do_aluno + ".txt");

                if (Aluno.is_open()) {
                    cout << "\nInsira o numero de matricula do aluno: ";
                    getline(cin, Matricula);
                    Aluno << Matricula << "\n";
                    cout << "Aluno cadastrado com sucesso!" << endl;
                    Aluno.close();
                } else {
                    cout << "Nao foi possivel abrir o arquivo." << endl;
                }
                break;

            // 2
            case 2:
                cout << "Adicionar nota de aluno selecionado." << endl << endl;
                cout << "O aluno ja possui cadastro? Digite 1 para Sim e 2 para Nao: ";
                cin >> Resposta;

                // Tem cadastro
                if (Resposta == 1) {
                    cout << "Informe o nome completo do aluno: ";
                    cin.ignore(); // Limpar o buffer do cin antes de getline
                    getline(cin, Nome_do_aluno);

                    // Abrir o arquivo em modo de append --> Coloca no fim do arquivo
                    Aluno.open("C:\\Users\\Gabriel Francsico\\Desktop\\" + Nome_do_aluno + ".txt", ios::app);

                    if (Aluno.is_open()) {
                        cout << "\nQuantas notas deseja adicionar? ";
                        cin >> Num_de_notas;

                        for (int i = 0; i < Num_de_notas; i++) {
                            cout << "Nota " << (i + 1) << " : ";
                            cin >> Nota;
                            Aluno << Nota << "\n";
                        }
                        Aluno.close();
                    } else {
                        cout << "Nao foi possivel abrir o arquivo." << endl;
                    }
                } else {
                    // Não tem cadastro
                    cout << "Informe o nome completo do aluno: ";
                    cin.ignore(); // Limpar o buffer do cin antes de getline
                    getline(cin, Nome_do_aluno);

                    Aluno.open("C:\\Users\\Gabriel Francsico\\Desktop\\" + Nome_do_aluno + ".txt");

                    if (Aluno.is_open()) {
                        cout << "\nInsira o numero de matricula do aluno: ";
                        getline(cin, Matricula);
                        Aluno << Matricula << "\n";
                        cout << "Aluno cadastrado com sucesso!" << endl;
                        Aluno.close();

                        cout << "\nQuantas notas deseja adicionar? ";
                        cin >> Num_de_notas;

                        Aluno.open("C:\\Users\\Gabriel Francsico\\Desktop\\" + Nome_do_aluno + ".txt", ios::app);
                        for (int i = 0; i < Num_de_notas; i++) {
                            cout << "Nota " << (i + 1) << " : ";
                            cin >> Nota;
                            Aluno << Nota << "\n";
                        }
                        Aluno.close();
                    } else {
                        cout << "Nao foi possivel abrir o arquivo." << endl;
                    }
                }
                break;

            // 3
            case 3:
                cout << "Informe o nome completo do aluno: ";
                cin.ignore(); // Limpar o buffer do cin antes de getline
                getline(cin, Nome_do_aluno);

                Dados.open("C:\\Users\\Gabriel Francsico\\Desktop\\" + Nome_do_aluno + ".txt");

                if (Dados.is_open()) {
                    cout << "Arquivo aberto com sucesso !" << endl;

                    string linha;
                    getline(Dados, linha);  // Ignorar a primeira linha (matrícula)

                    float Soma = 0;
                    int Cont = 0;

                    while (Dados >> Nota) {
                        Soma += Nota;
                        Cont++;
                    }

                    if (Cont > 0) {
                        cout << "A media do aluno " << Nome_do_aluno << " eh " << Soma / Cont << endl;
                    } else {
                        cout << "Nenhuma nota encontrada para o aluno." << endl;
                    }

                    Dados.close();
                } else {
                    cout << "Nao foi possivel abrir o arquivo." << endl;
                }
                break;

            // 4
            case 4:
                cout << "Fim do programa." << endl << endl;
                return 0;

            default:
                cout << "Dados inseridos incorretamente. Tente novamente." << endl << endl;
                break;
        }
    }

    return 0;
}
