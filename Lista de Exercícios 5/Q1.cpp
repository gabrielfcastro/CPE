#include <iostream>
#include <iomanip> // Para ter a precisão de uma casa decimal
using namespace std;


// Função que vai fazer a conversão
int C_F(float A){
    float F;
    F = 9.0/5.0 * A + 32.0;
    return F;
}

int main(){ 
    cout << fixed << setprecision(1);
    for (float C = 0; C < 101; C++)
    {
    // A função de conversão recebe os valores
    cout << C << " graus Celsius equivale a " << C_F(C) << " graus Fahrenheit " << endl;
    }
    return 0;

}