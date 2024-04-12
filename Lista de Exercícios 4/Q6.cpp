#include <iostream>
using namespace std;
// Variaveis que vão receber o número pensado, o menor número possível, o maior possível, o palpite do programa e a resposta final
int numero_Pensado, menor, maior, palpite, resposta_Final, num_de_Perguntas;
// Variável que vai armazenar a resposta do usuário
char resposta, resposta_MaiorMenor;

int main() {
    // Incializa com o menor e maior valores possiveis
    menor = 1; 
    maior = 100; 
    
    cout << "Pense em um número entre 1 e 100 e escreva-o no terminal." << endl;
    cin >> numero_Pensado;

    while (menor <= maior) {
        palpite = (menor + maior) / 2;

        cout << "O seu número é " << palpite << " ? (Escreva S p/ SIM e N p/ NÃO) " << endl;
        cin >> resposta;
        num_de_Perguntas += 1;

        if (resposta == 'S') {
            cout << "O meu palpite é " << palpite << " e o número que você pensou é " << numero_Pensado << endl;
            break;
        }
        else if ( resposta == 'N') {
            cout << "O número que você pensou é maior? (Escreva - p/ MENOR e + p/ MAIOR)" << endl;
            cin >> resposta_MaiorMenor;
            if (resposta_MaiorMenor == '+'){
                menor = palpite + 1;
            }
            else{
                maior = palpite - 1;
            }
        }
    }
    cout << "O número total de perguntas feitas foram: " << num_de_Perguntas << endl;
    return 0;
}

