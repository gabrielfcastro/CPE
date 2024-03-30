#include <iostream>
using namespace std;

int main(){
    // Variável que vai receber o número primo
    int n;

    // Recebe o número
    cout << "Insira o número: \n";
    cin >> n;
    
    // Fazemos a verificação
    // Verifica se é maior que 1
    if (n <= 1){
        cout << "O número " << n << " não é primo" << endl; 
    }
    // Verifica se é 2
    if (n == 2){
        cout << "O número " << n << " é primo" << endl;
    }
    else{
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                cout << "O número " << n << " não é primo" << endl;
                break; 
            }
            if (n == i + 1){
                cout << "O número " << n << " é primo" << endl; 
                break;
            }
        }
    }
}

