#include <iostream>
using namespace std;

int main(){
    // Declara as variáveis que vão receber os dois numeros
    int x,y;

    // Variável que vai armazenar o resto
    float resto_X, resto_Y;

    // Recebe os dois números
    cout << "Insira os dois numeros desejados: \n";
    cin >> x >> y;

    // Verifica qual é maior
    // Caso o x seja MAIOR
    if(x > y){
        resto_X = x % y;
        if(resto_X == 0){
            cout << "Os numeros " << x << " e " << y << " são múltiplos" << endl;
        }
        else{
            cout << "Os números não são multiplos" << endl;
        }
    }
    // Caso o y seja MAIOR
    if(y > x){
        resto_Y = y % x;
        if (resto_Y == 0){
            cout << "Os numeros " << y << " e " << x << " são múltiplos" << endl;
        }
        else{
            cout << "Os números não são multiplos" << endl;
        }
    }
    return 0;
}