#include <iostream>
using namespace std;
// Variável que receberá o caractere
char caractere;

int main (){
    // Recebe um caractere
    cout << "Insira o caractere desejado: \n";
    cin >> caractere;

    switch (caractere)
    {
    // 1
    case 'a':
        cout << "O caractere digitado corresponde a vogal A " << endl;
        break;
    
    // 2
    case 'e':
        cout << "O caractere digitado corresponde a vogal E " << endl;
        break;
    
    // 3
    case 'i':
        cout << "O caractere digitado corresponde a vogal I " << endl;
        break;

    // 4
    case 'o':
        cout << "O caractere digitado corresponde a vogal O " << endl;
        break;

    // 5
    case 'u':
        cout << "O caractere digitado corresponde a vogal U " << endl;
        break;

    // 6
    case 'A':
        cout << "O caractere digitado corresponde a vogal A " << endl;
        break;
    
    // 7
    case 'E':
        cout << "O caractere digitado corresponde a vogal E " << endl;
        break;
    
    // 8
    case 'I':
        cout << "O caractere digitado corresponde a vogal I " << endl;
        break;

    // 9
    case 'O':
        cout << "O caractere digitado corresponde a vogal O " << endl;
        break;

    // 10
    case 'U':
        cout << "O caractere digitado corresponde a vogal U " << endl;
        break;

    // SAÍDA
    default:
        cout << "O caractere digitado corresponde não corresponde a nenhuma vogal " << endl;
        break;
    }
    return 0;
}
