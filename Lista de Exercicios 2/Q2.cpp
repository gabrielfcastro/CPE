#include <iostream>
using namespace std;

int main(){
    // Declara as variáveis que armazenarão os valores
    int x,y;

    // Declara as variáveis que executarão as operações
    int sum, dif1, dif2, prod;
    float quo;

    // Recebe os valores
    cout << "Insira os dois valores desejados: \n";
    cin >> x >> y;

    // Faz as operações3
    sum = x + y;
    dif1 = x - y;
    dif2 = y - x;
    prod = x * y;
    quo = x/y - y/x;

    // Imprimindo o resultado no Terminal
    cout << "O valor da soma é: " << sum << "\n O valor da difrença (x-y) é: " << dif1 << "\n O valor da diferença (y-x) é: " << dif2 << "\n O valor do produto é: " << prod << "\n O valor da dif dos quocientes é: " << quo << endl;
    return 0;

}