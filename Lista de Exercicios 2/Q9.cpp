#include <iostream>
using namespace std;

int main(){
    // Recebe a quilometragem do carro
    float dist;
    
    cout << "Insira a quilometragem do carro: \n";
    cin >> dist;

    // Preço a ser pago
    float valor;

    // Verificando 
    // 1
    if (dist <= 50){
        valor = 1.75 * dist;
        cout << "O valor a ser pago será " << valor << " reais" << endl;
    }
    // 2
    else if (dist <= 150){
        valor = 1.65 * dist;
        cout << "O valor a ser pago será " << valor << " reais" << endl;
    }
    // 3
    else{
        valor = 1.5 * dist;
        cout << "O valor a ser pago será " << valor << " reais" << endl;
    }
}