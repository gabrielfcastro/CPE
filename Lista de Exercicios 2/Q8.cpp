#include <iostream>
#include <cmath>

using namespace std;

int main (){
    // Variável que vai receber o valor dos dois catetos
    int a,b;
    cout << "Insira o valor dos dois catetos: \n";
    cin >> a >> b;

    // Encontrando o valor da hipotenusa
    float c;
    c = sqrt(a*a + b*b);
 
    // Verificando se o triângulo existe
    if (a + b < c){
        cout << "Esse triângulo não existe" << endl;
    }
    else if (a + b > c){
        cout << "A hipotenusa do triângulo vale " << c << " metros, supondo que seja um triângulo retangulo" << endl;
    }
}