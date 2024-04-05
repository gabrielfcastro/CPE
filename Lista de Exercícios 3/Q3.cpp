#include <iostream>
using namespace std;
// Variáveis auxiliares
int numero, palindromo, num, digito;


int main(){
    // Recebe o possível palindromo
    cout << "Insira um número inteiro: \n";
    cin >> numero;
    // Copia o input para uma espécie de "flag"
    num = numero;

    while (num != 0){
        // Separa o último digito do número
        digito = num % 10;
        palindromo = palindromo * 10 + digito;

        // Vai divindo, quando o numero for zero é porque ja "rodou" o número todo
        num = num / 10; 
    }

    if (palindromo == numero){
        cout << numero <<  " e " <<  palindromo << " são iguais, logo são palindromos " << endl;
    }
    else{
        cout << numero <<  " e " <<  palindromo << " não são iguais, logo não são palindromos " << endl;
    }
    return 0;
    

}