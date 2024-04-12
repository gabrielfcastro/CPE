#include <iostream>
using namespace std;
// Variável que vai armazenar a string ("*")
string str = "*";
// Variáveis que vão armazenar o desenho
string str_Auxiliar_1, str_Auxiliar_2, str_Auxiliar_3, str_Auxiliar_4, str_Auxiliar_5;
// Variáveis que armazenará os números que serão lidos
int n1, n2 , n3 , n4 , n5;

int main (){
    // Recebe os números entre 1 e 30
    cout << "Insira 5 números entre 1 e 30: \n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Para o primeiro número
    for (int i = 0; i < n1; i++)
    {
        str_Auxiliar_1 += str;
    }

    // Para o segundo número
    for (int i = 0; i < n2; i++)
    {
        str_Auxiliar_2 += str;
    }
    
    // Para o terceiro número
    for (int i = 0; i < n3; i++)
    {
        str_Auxiliar_3 += str;
    }
    
    // Para o quarto número
    for (int i = 0; i < n4; i++)
    {
        str_Auxiliar_4 += str;
    }

    // Para o quinto número
for (int i = 0; i < n5; i++)
    {
        str_Auxiliar_5 += str;
    }

    // Imprimindo as barras no terminal
    cout << endl << "Para n1: " << str_Auxiliar_1 << endl << "Para n2: " << str_Auxiliar_2 << endl 
    << "Para n3: " << str_Auxiliar_3 << endl << "Para n4: " << str_Auxiliar_4 
    << endl << "Para n5: " << str_Auxiliar_5 << endl;
    return 0;
}