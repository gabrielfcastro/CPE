#include <iostream>
using namespace std;

void hanoi (int n, int origem, int destino, int temporario){
    if (n == 1){
        cout << origem << " -> " << destino << endl;
        return;
    }
    hanoi(n-1, origem, temporario, destino);
    cout << origem << " -> " << destino << endl;
    hanoi(n-1, temporario, destino, origem); 
}

int main (){
    int origem = 1;
    int destino = 3;
    int temporario = 2;
    int n;

    cout << "Digite o valor de n: " ;
    cin >> n;

    hanoi(n, origem, temporario, destino);
    return 0;
}
