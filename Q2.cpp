#include <iostream>
using namespace std;
// Variáveis que receberão o preço do litro da Gasolina e o preço do litro de Álcool e a comparação entre eles
float preco_do_Alcool,preco_da_Gasolina, x;


int main(){
    // Recebe os valores da Gasolina e Alcool
    cout << "Insira o preço do litro de Álcool: \n";
    cin >> preco_do_Alcool;
    cout << "Insira o preço do litro da Gasolina: \n";
    cin >> preco_da_Gasolina;


    // Faz a comparação 
    x = preco_do_Alcool/preco_da_Gasolina;

    if (x <= 0.7){
        cout << "A recomendação é abastecer com Álcool" << endl;

    }
    
    else{
        cout << "A recomendação é abastecer com Gasolina" << endl;
}
    return 0;
}