#include <iostream>
using namespace std;
// Variáveis que receberá um número intério positivo e calculará o fatorial desse número, respectivamente
int n, aux ,n_Fatorial;

int main(){
    // Recebe o número inteiro positivo n
    cout << "Insira o número inteiro positivo que deseja que seja calculado o seu fatorial: \n";
    cin >> n;
    // Copia o valor de n p/ o aux
    aux = n;

    // Inicia n_Fatorial p/ facilitar a realização de multiplicação sucessivas
    n_Fatorial = 1;

    while (aux > 0){
        // Recebe o primeiro valor
        n_Fatorial *= aux;
        // cout << n_Fatorial << endl;;
        aux -= 1;
    }

    // Imprime o resultado no terminal
    cout << "O valor do número " << n << " em fatorial é igual " << n_Fatorial << endl;
    return 0;
}