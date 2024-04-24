#include <iostream>
#include <random>
using namespace std;


int gera_valores_Aleatorios(int& a, int& b) { // Por que precisa usar o &?
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution <> dis(0, 10);
    a = dis(gen);
    b = dis(gen);

    return a * b;
}

int verificacao_do_Resultado (int a, int b){
    int resultado;

    cout << "Insira o valor do produto entre " << a << " e " << b <<  " é igual a: " << endl;
    cin >> resultado;

    return resultado;

}

int main(){

    char resposta;

    int x, y;

    int operacao;

    int palpite;

    operacao = gera_valores_Aleatorios(x,y);

    while (true)
    {
        palpite = verificacao_do_Resultado(x,y);

        if (palpite == operacao)
        {
            cout << "Você acertou ! O valor da produto é  "  << palpite << endl;
            operacao = gera_valores_Aleatorios (x,y);

            cout << "Deseja continuar? Digite S p/ SIM e N p/ NÃO." << endl;
            cin >> resposta;

            if (resposta == 'N')
            {
                break;
            }
            else 
                continue;
        }
        else
            cout << "Você errou, por favor tente novamente. " << endl;
    }
    return 0;
}