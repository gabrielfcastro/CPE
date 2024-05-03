#include <iostream>
using namespace std;

int main(){
    // Variáveis que irão receber as coordenadas 
    float x1 , y1 , x2 , y2 , x3 , y3;

    // Recebe os valores
    cout << "Insira os 6 pontos esperados: \n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Vamos printar os valores p/ confirmar a recepção
    // cout << x1 << y1 << x2 << y2 << x3 << y3 << endl;

    // Calcuando o coef. angular
    float a;
    a = (y2 - y1)/(x2 - x1);
    
    // Calculando o termo independente 
    float b;
    // Equação 1
    b = y1 - a * x1;
    // Equação 2
    // b = y2 - a * x2;

    // Para garantir se ponto 3 passa ou não pela reta, vamos substituir o X e Y e buscar o mesmo valor
    float X, Y;

    Y = a * x3 + b;
    X = (Y - b)/a;

    // Para o Y
    if (Y == y3)
    {
        // Para o X
        if (X == x3)
        {
            cout << "y = " << a << " * x + " << b << endl;
            cout << "O PONTO (" << x3 << "," << y3 << ") PERTENCE A RETA." << endl;
        }
        else{
            cout << "O PONTO (" << x3 << "," << y3 << ") NÃO PERTENCE A RETA." << endl;

        }
        
    }
    
    // SE NÃO PERTENCER
    else{
        cout << "y = " << a << " * + " << b << endl;
        cout << "O PONTO (" << x3 << "," << y3 << ") NÃO PERTENCE A RETA." << endl;
    }


    return 0;
}