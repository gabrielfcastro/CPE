#include <iostream>
using namespace std;
// Declarando o valor de cada produto em forma de cte
// Produto 1
const float P1 = 2.98;
// Produto 2
const float P2 = 4.50;
// Produto 3
const float P3 = 9.98;
// Produto 4
const float P4 = 4.49;
// Produto 5
const float P5 = 6.87;

// Variável que vai receber o valor a ser pago
float valor_Total = 0.00;

// Declarando as variaveis que vão armazenar o número do produtoe a quantidade vendida
int A, B;


int main(){
    // Recebe o número do produto
    cout << "Insira o número do produto vendido: \n";
    cin >> A;

    // Recebe a quantidade de produtos vendidos
    cout << "Insira a quantidade de produtos ventidos: \n";
    cin >> B;

    switch (A)
    {
    case 1:
        while (B > 0)
        {
            valor_Total += P1;
            B -= 1;
        }
        break;

    case 2:
        while (B > 0)
        {
            valor_Total += P2;
            B -= 1;
        }
        break;

    case 3:
        while (B > 0)
        {
            valor_Total += P3;
            B -= 1;
        }
        break;

    case 4:
        while (B > 0)
        {
            valor_Total += P4;
            B -= 1;
        }
        break;

    case 5:
        while (B > 0)
        {
            valor_Total += P5;
            B -= 1;
        }
        break;
    
    default:
        cout << "O número do produto vendido está incorrento, tente novamente " << endl;
        break;
    }
    // Imprime na tela o valor total
    cout << " O valor total a ser pago é R$" << valor_Total << endl;
    return 0;






}