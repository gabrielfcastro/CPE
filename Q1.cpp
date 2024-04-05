#include <iostream>
using namespace std;
// Variáveis que receberão a quantidade de litros consumidos, a quilometragem e calculará consumo por litro
int L, K;
int consumo_por_Litro;


int main(){
    // Recebe os valores
    cout << "Insira quantos litros foram consumidos: \n";
    cin >> L;
    cout << "Insira quantos quilometros foram percorridos: \n";
    cin >> K;


    // Faz as operações
    consumo_por_Litro = K/L;

    // Imprime o resultado no terminal
    cout << "O carro faz aproximadamente de " << consumo_por_Litro << " Km/L" << endl;
    return 0;
}