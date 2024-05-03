#include <iostream>
using namespace std;

// Funcão responsável pela PERMUTAÇÃO
int permutacao(int x){
    int n_Fatorial = 1;

    // Calcula o fatorial
    for (int i = 1; i <= x; i++)
    {
        n_Fatorial *= i;
    }

    return n_Fatorial;
}

// Função responsável pelo ARRANJO
int arranjo (int x, int y){

    int numerador_Fatorial = 1;
    int denominador_Fatorial = 1;

    int sub = x - y;

    // Calcula o NUMERADOR FATORIAL
    for (int i = 1; i <= x; i++)
    {
        numerador_Fatorial *= i;
    }

    // Calcula o DENOMINADOR FATORIAL
    for (int i = 1; i <= sub; i++)
    {
        denominador_Fatorial *= i;
    }

    return numerador_Fatorial/denominador_Fatorial;

}

// Função responsável pela COMBINAÇÃO
int combinacao (int x, int y){

    int numerador_Fatorial = 1;
    int denominador_Fatorial = 1;
    int p_Fatorial = 1;

    int sub = x - y;

    // Calcula o NUMERADOR FATORIAL
    for (int i = 1; i <= x; i++)
    {
        numerador_Fatorial *= i;
    }

    // Calcula o DENOMINADOR FATORIAL
    for (int i = 1; i <= sub; i++)
    {
        denominador_Fatorial *= i;
    }

    // Calcula o P FATORIAL
    for (int i = 1; i <= y; i++)
    {
        p_Fatorial *= i;
    }


    return numerador_Fatorial/(denominador_Fatorial * p_Fatorial);

}


int main(){
    // Variável que irá receber o IDENTIFICADOR
    int identificador;

    // Variável que irá armazenar a RESPOSTA
    int resposta;

    // Variável que ira armazenar n e p
    int n,p;

    // Recebe os valores
    cout << "Insira o IDENTIFICADOR (1 - Permutação , 2 - Arranjo , 3 - Combinação , 0 - Encerra o programa): \n";
    cin >> identificador;

    switch (identificador)
    {

    // Permutação
    case 1:
        //cout << "Permutação escolhida!";

        cout << "Insira o valor inteiro n: \n";
        cin >> n;
        resposta = permutacao(n);
        cout <<  "\n P(" << n << ") = " << resposta << endl;
        break;
    
    // Arranjo
    case 2:
        cout << "Arranjo escolhido!";

        cout << "Insira o valor inteiro n e p: \n";
        cin >> n >> p;
        resposta = arranjo(n,p);
        cout <<  "\n A(" << n << "," << p << ") = " << resposta << endl;
        break;

    // Combinação
    case 3:
        cout << "Combinação escolhida!";

        cout << "Insira o valor inteiro n e p: \n";
        cin >> n >> p;

        resposta = combinacao(n,p);
        cout <<  "\n C(" << n << "," << p << ") = " << resposta << endl;
        break;

    // Encerra o programa
    case 0:
        cout << "\n Encerrando";
        break;

    // Encerra o programa
    default:
        cout << "\n Operação inválida!";
        break;
    }

    return 0;
}