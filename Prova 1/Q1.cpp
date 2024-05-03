#include <iostream>
using namespace std;

int main(){
    // Variável que irá receber a idade do usuário
    int idade;

    // Recebe os valores
    cout << "Insira sua idade: \n";
    cin >> idade;

    // Voto obrigatório (ENTRE 18 E 65 ANOS)
    if (idade > 17 and idade < 66)
    {
        cout << "ELEITOR: VOTO OBRIGATÓRIO" << endl;
    }
    // Resto(PODE SER FACULTATIVO OU NÃO ELEITOR)
    else{
        // Facultativo (16/17 e 65+)
        if (idade == 16 or idade == 17 or idade > 65)
        {
        cout << "ELEITOR: VOTO FACULTATIVO" << endl;
        }
        else{
        cout << "NÃO ELEITOR" << endl;
        }
    }
    return 0;
}