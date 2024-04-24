#include <iostream>
using namespace std;


// Um número é considerado perfeito se a soma de todos seus divisores (sem contar ele mesmo) é igual ao próprio número
void perfeito(int a){
    int resto1, resto2 ,soma;
    soma = 0;
    for (int i = 1; i < a; i++)
    {
        resto1 = a % i;
        if (resto1 == 0)
        {
            soma += i;    
        }
        }
    if (soma == a)
    {
        cout << endl << a << " é um número perfeito. As parcelas são:";
        // Acha as parcelas
        for (int i = 1; i < a; i++)
        {
            resto2 = a % i;
            if (resto2 == 0)
            {
                cout << " " << i;
            }
            
        }
        return;
    }
    }

int main(){
    for (int num = 1; num <= 1000; num++)
    {
        perfeito(num);

    }
    return 0;

}