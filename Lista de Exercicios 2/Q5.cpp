#include <iostream>
using namespace std;

int main(){
    // Declara a variável que irá armazenar a largura e comprimento
    int l,h;

    // Recebe a largura e comprimento
    cout << "Insira a largura e altura em metros: \n";
    cin >> l >> h;

    // Calcula a aréa
    float a;
    a = l * h;

    // Imprime no terminal
    cout << "A aréa calcuda é igual a: " << a << " metros quadrados" << endl;
    return 0;
}