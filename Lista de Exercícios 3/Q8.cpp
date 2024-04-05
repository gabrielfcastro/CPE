#include <iostream>
#include <iomanip> 
using namespace std;
float n1, n2, resultado_1, resultado_2;
// Variável que receberá a operação
char operacao;

int main(){
    // Recebe a senha
    cout << "Insira os dois número reais: \n";
    cin >> n1 >> n2;
    // Recebe a operação que será feita
    cout << "Insira a operação desejada ('+', '-', '*', '/') \n";
    cin >> operacao;

    // Define a precisão para duas casas decimais
    cout << fixed << setprecision(2); 

    switch (operacao)
    {
    // Operação de adição
    case '+':
        resultado_1 = n1 + n2;
        cout << "O resultado da soma dos dois número é " << resultado_1 << endl;
        break;
    
    // Operação de adição
    case '-':
        resultado_1 = n1 - n2;
        resultado_2 = n2 - n1;
        cout << "O resultado da subtração (n1-n2) é " << resultado_1 << " ,enquanto a o resultado de (n2 - n1) é " << resultado_1 << endl;
        break;
    
    // Operação de adição
    case '*':
        resultado_1 = n1 * n2;
        cout << "O resultado da multiplicação do dois número é " << resultado_1 << endl;
        break;

    // Operação de adição
    case '/':
        resultado_1 = n1/n2;
        resultado_2 = n2/n1;
        cout << "O resultado da divisão (n1/n2) é " << resultado_1 << " ,enquanto a o resultado de (n2/n1) é " << resultado_2 << endl;
        break;
    
    default:
        cout << "Comando inválido, tente novamente" << endl;
        break;
    }
    return 0;
}