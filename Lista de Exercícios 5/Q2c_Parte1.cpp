#include <iostream>
#include <cmath>
using namespace std;


// Diz se é primo ou não
int eh_Primo(double a){
    int resto;
    double raiz;

    raiz = sqrt(a);
    for (int i = 3; i <= raiz; i++)
    {
        resto = fmod(a,i);
        if (resto == 0)
        {
            cout << a << " não é primo " << endl;
            break;
        }
        if (resto == raiz)
        {
            cout << a << " é primo " << endl;
            break;        }
    }
    return 0;
}

int main(){
    // Variável que vai armazenar o número
    double num;

    cout << "Digite um número positivo maior que 1 (1 não é primo): ";
    cin >> num;

    // Função recebe o número
    eh_Primo(num);
    return 0;

}