#include <iostream>
using namespace std;
// Variável que receberá a senha
int senha;

int main(){
    // Recebe a senha
    cout << "Insira a sua senha: \n";
    cin >> senha;

    switch (senha)
    {
    case 1234:
        cout << "ACESSO PERMITIDO" << endl;
        break;
    
    default:
        cout << "ACESSO NEGADO" << endl;
        break;
    }
    return 0;
}