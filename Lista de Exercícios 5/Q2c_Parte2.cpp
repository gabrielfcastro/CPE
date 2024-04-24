#include <iostream>
#include <cmath>
using namespace std;


// Diz se é primo ou não
void eh_Primo(double a){
    int resto;
    double raiz;

    raiz = sqrt(a);
    for (int i = 2; i <= raiz; i++)
    {
        resto = fmod(a,i); // Calcula resto com .flutuante
        if (resto == 0)
        {
            //cout << a << " não é primo " << endl;
            return;
        }
    }
    cout << a << " é primo " << endl;
}

int main(){
    for (double num = 2; num <= 1000; num++)
    {
        eh_Primo(num);
    }
    
    return 0;

}