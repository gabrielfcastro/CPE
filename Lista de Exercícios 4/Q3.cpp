#include <iostream>
using namespace std;

int main (){
    for (int lado_1 = 1; lado_1 < 21; lado_1++)
    {
        for (int lado_2 = 1; lado_2 < 21; lado_2++)
        {
            for (int lado_3 = 1; lado_3 < 21; lado_3++)
            {
                // P/ o lado 1
                if ( lado_1 * lado_1 == lado_2 * lado_2 + lado_3 * lado_3)
                {
                    cout << "A configuração com a hipotenusa sendo o lado 1 e valendo " << lado_1 << ", com o lado 2 valendo " << lado_2 << " e o lado 3 valendo " << lado_3 << " é triplo de Pitagoras" << endl;
                }
                // P/ o lado 2
                if ( lado_2 * lado_2 == lado_1 * lado_1 + lado_3 * lado_3)
                {
                    cout << "A configuração com a hipotenusa sendo o lado 2 e valendo " << lado_2 << ", com o lado 1 valendo " << lado_1 << " e o lado 3 valendo " << lado_3 << " é triplo de Pitagoras" << endl;
                }
                // P/ o lado 3
                if ( lado_3 * lado_3 == lado_1 * lado_1 + lado_2 * lado_2)
                {
                    cout << "A configuração com a hipotenusa sendo o lado 3 e valendo " << lado_3 << ", com o lado 1 valendo " << lado_1 << " e o lado 2 valendo " << lado_2 << " é triplo de Pitagoras" << endl;
                }
            }
            
        }
        
    }
    return 0;
}