#include <iostream>
using namespace std;


// Diz se é primo ou não
int eh_Primo(int a){
    int resto;
    for (int i = 2; i < a+1; i++)
    {
        if (i == a)
        {
            cout << a << " é um número primo " << endl;
            break;
        }
        
        resto = a % i;
        if (resto == 0)
        {
            cout << a << " não é um número primo " << endl;
            break;
        }
    }
    return 0 ;
    
}

int main(){
    // Variável que vai armazenar o número
    int num;

    cout << "Digite um número positivo maior que 1 (1 não é primo): ";
    cin >> num;

    // Função recebe o número
    eh_Primo(num);
    return 0;

}