#include <iostream>
using namespace std;
// Variável que vai receber o número de termos e duas variáveis auxiliares aux1 e aux2, respectivamente
int n, aux1, aux2;
// Variável qie vai realizar as operações
float e, denominador, parcela;


int main(){
    // Recebe o número de termos
    cout << "Insira o número de termos desejados: \n";
    cin >> n;
    
    // Inicia e como 1 p/ facilitar as operações
    e = 1.0;
    denominador = 1.0;

    aux1 = n;
    aux2 = 1;

    for (int i = 0; i < n; i++)
    {
        // Calcula o denominador
        while (aux1 > 0)
        {   
            denominador *= aux1;
            aux1 -= 1;
        }
    parcela = 1.0/ denominador;
    e += parcela;
    denominador = 1.0;
    aux1 = n - aux2;
    if (aux1 == 0 ){
        break;
    }
    aux2 += 1;
    }
    cout << "O valor do termo " << n << " é " << e << endl;
    return 0;
}   