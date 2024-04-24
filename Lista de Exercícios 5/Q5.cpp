#include <iostream>
#include <random>
using namespace std;


int gera_valores_Aleatorios(int a) { // Por que precisa usar o &?
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution <> dis(0, 1000);
    a = dis(gen);

    return a;
}

int verificacao_do_Resultado (int a){

    int palpite;

    cout << "Eu tenho um número entre 0 e 1000. Você consegue advinhar meu número? Digite seu palpite" << endl;
    cin >> palpite;

    return palpite;

}

int acerto (char resposta){
    cout << " Você acertou ! Deseja jogar novamente ? Digite S p/ SIM e N p/ NÃO. " << endl;
    cin >> resposta;

    return resposta;

}

void erro_Maior (){
    cout << "Muito alto! Tente novamente" << endl;
}

void erro_Menor (){
    cout << "Muito baixo! Tente novamente" << endl;
}


int main(){
    char resposta;

    int palpite;

    int num = gera_valores_Aleatorios(num);

    while (true)
    {
        palpite = verificacao_do_Resultado(palpite);

        if (palpite == num)
        {
        resposta = acerto(resposta);
        if (resposta == 'S')
        {
            continue;
        }
        else{
            break;
        }  
        }
        else{
            // MAIOR
            if (palpite > num)
            {
                erro_Maior();
            }
            // MENOR
            else{
                erro_Menor();
            }

        }
    }
    return 0;
}