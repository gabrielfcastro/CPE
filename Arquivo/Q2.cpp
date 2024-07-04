#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream Texto("C:\\Users\\Gabriel Francsico\\Desktop\\Valentina.txt");

    string Str;

    int Tam = 0;

    int Contador = 0;

    char Char;

    cout << "Digite o caractere que deseja contar as ocorrencias: ";
    cin >> Char;
    cin.ignore(); // Limpa o buffer do cin


    // Arquivo de texto aberto
    if (Texto.is_open())
    {
        while(getline(Texto, Str))
        {
            cout << Str << endl;

            Tam = Str.length();

            for (int i = 0; i < Tam; i++)
            {
                if (Str[i] == Char)
                {
                    Contador ++;
                }
            }
        }
        // Fecha o arquivo
        Texto.close();

        cout << "\nO caractere " << Char << " teve um total de " << Contador << " ocorrencias " << endl;
    }
    
    // Falha durante a abertura
    else
    {
        cerr << "Erro durante a leitura do Arquivo, nao foi possivel abri-lo.\n";
    }

    return 0;
}
