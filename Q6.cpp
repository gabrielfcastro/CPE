#include <iostream>
using namespace std;
// Variáveis que receberão os lados do triangulo
int lado_1, lado_2, lado_3;

int main(){
    // Recebe os lados do triângulo
    cout << "Insira os lados do triângulo: \n";
    cin >> lado_1 >> lado_2 >> lado_3;
    // Para Triângulo equilatero
    if (lado_1 == lado_2 and lado_1 == lado_3 and lado_2 == lado_3){ // Pq não pode colocar lado_1 == lado_2 == lado_3?
        cout << "Esse triângulo é equilatero" << endl;
    }
    // Para Triângulo isóscele
    else if (lado_1 == lado_2 or lado_1 == lado_3 or lado_2 == lado_3)
    {
        cout << "Esse triângulo é isóscele" << endl;
    }
    // Para Triângulo escaleno
    else{
        cout << "Esse triângulo é escaleno" << endl;
    }
    return 0;    
}
