#include <iostream>
using namespace std;
// Variável que vai armazenar a string ("*")
string str = "*";
// Variáveis que vão armazenar o desenho
string str_Auxiliar_1, str_Auxiliar_2;
// Variáveis auxiliares
int aux_1 = 1; 
int aux_2 = 10;

int main (){
    for (int i = 0; i < 10; i++)
    {
        // Desenho que começa com 1 *
        for (int i = 0; i < aux_1; i++)
        {
            str_Auxiliar_1 += str;
        }
        
        // Desenho que começa com os 10 *
        for (int i = 0; i < aux_2; i++)
        {
            str_Auxiliar_2 += str;
        }
        // Atualiza os auxiliares
        aux_1 += 1;
        aux_2 -= 1;

        // Imprimi linha por linha
        cout << str_Auxiliar_1 << "    " << str_Auxiliar_2 << "    " << str_Auxiliar_2 << "    " << str_Auxiliar_1 << endl;
        
        // Limpa as variáveis que vão receber o desenho p/ ir pra próxima linha
        str_Auxiliar_1 = "";
        str_Auxiliar_2 = "";
    }
    return 0;
}