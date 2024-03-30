#include <iostream>
using namespace std;

int main(){
    // Declara a variável que irá armazenar o raio
    int r;

    // Declara a variável que armazenara a Aréa e o Diametro
    float a,d;

    // Recebe o raio
    cout << "Insira o raio desejado em metros: \n";
    cin >> r;

    // Fazendo as operações 
    const float pi = 3.14159; // Declarando a cte
    a = pi * (r*r);
    d = 2 * pi * r;

    // Imprimindo o resultado no Terminal
    cout << "A aréa é igual a aproximadamente: " << a << " metros quadrados" << "\nO diametro é igual a aproximadamente: " << d << " metros" << endl;
    return 0;

}
