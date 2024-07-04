#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream Alturas("C:\\Users\\Gabriel Francsico\\Desktop\\altura.txt");
    string Str1 , Str2, UsuarioAltura;

    ifstream Pesos("C:\\Users\\Gabriel Francsico\\Desktop\\peso.txt");
    string Str3 , Str4, UsuarioPeso;

    float Altura = 0;
    float Peso = 0;

    float aAtual;
    float pAtual;
    



    // Arquivo de texto aberto
    if ( Alturas.is_open() && Pesos.is_open() )
    {
        while ( (getline(Alturas,Str1) && getline(Alturas,Str2)) && ( getline(Pesos,Str3) && getline(Pesos,Str4) ) )
        {
            // Converte a altura para float
            aAtual = stof(Str2); 

            // Converte o peso para float
            pAtual = stof(Str4);

            // Primeira leitura
            if (Altura == 0 && Peso == 0)
            {
                Altura = aAtual;
                UsuarioAltura = Str1;

                Peso = pAtual;
                UsuarioPeso = Str3;
            }

            else
            {
                if (aAtual > Altura)
                {
                    Altura = aAtual;
                    UsuarioAltura = Str1;
                }

                if (pAtual > Peso)
                {
                    Peso = pAtual;
                    UsuarioPeso = Str3;
                }
                
            }
        }
        
        cout << "O usuario " << UsuarioAltura << " eh o mais alto e possui " << Altura << " metros." << endl;

        cout << "O usuario " << UsuarioPeso << " eh o mais pesado e possui " << Peso << " kg." << endl;

        // Fecha os arquivos
        Alturas.close();
        Pesos.close();

    }
    // Falha durante a abertura
    else
    {
        cerr << "Erro durante a leitura do Arquivo, nao foi possivel abri-lo.\n";
    }

    return 0;
}
