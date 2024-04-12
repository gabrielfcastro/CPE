    #include <iostream>
    using namespace std;
    // Variável que vai receber o número de termos e duas variáveis auxiliares aux1 e aux2, respectivamente
    int n, aux1, aux2;
    // Variável qie vai realizar as operações
    float e, denominador, numerador ,parcela, aux3;


    int main(){
        // Recebe o número de termos
        cout << "Insira o número de termos desejados: \n";
        cin >> n;

        // Recebe o parametro do numerador
        cout << "Insira o parâmetro do numerador: \n";
        cin >> numerador;
        
        // Inicia e como 1 p/ facilitar as operações
        e = 1.0;
        denominador = 1.0;

        aux1 = n;
        aux2 = 1;
        aux3 = 10;
        numerador = 1;

        for (int i = 0; i < n; i++)
        {
            // Calcula o denominador
            while (aux1 > 0)
            {   
                numerador *= aux3;
                denominador *= aux1;
                aux1 -= 1;
            }
        // cout << numerador << endl;
        parcela = numerador/ denominador;
        e += parcela;
        
        // Reinicia as variaveis
        numerador = 1.0;
        denominador = 1.0;
        

        aux1 = n - aux2;
        if (aux1 == 0 ){
            break;
        }
        aux2 += 1;
        }
        cout << "O valor do termo " << n << " é " << e << endl;
        return 0;
    }   