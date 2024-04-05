#include <iostream>
using namespace std;
// Variáveis auxiliares
int numero_Binario, representacao_Decimal, num, digito_Binario, digito_Decimal;
int potencia_Dois = 1;


int main(){
    // Recebe um número binário
    cout << "Insira o número binário desejado: \n";
    cin >> numero_Binario;
    // Cria uma cópia que será usada para saber quando todo o número foi rodado
    num = numero_Binario;

    while (num != 0){
        // Separa o atual último digito
        digito_Binario = num % 10;
        // Transforma em representação decimal, multiplicando por uma potência de dois
        digito_Decimal = digito_Binario * potencia_Dois;
        // Vai somando em uma variável
        representacao_Decimal += digito_Decimal;
        // Passa para a próxima potencia de dois
        potencia_Dois = potencia_Dois * 2;
        // Decrementa o contador
        num = num / 10; 
    }
    cout << " O " << numero_Binario << " corresponde a "  << representacao_Decimal << " em representação decimal " << endl;
    return 0;
    

}