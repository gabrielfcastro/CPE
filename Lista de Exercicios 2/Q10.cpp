# include <stdio.h>
# include <stdlib.h>
#include <string.h>
char senha[5];
char vogais[] = {'a', 'e', 'i', 'o', 'u', '\0'};
int j;
int i;
int cont;

int main(){
	printf("Digite sua senha:\n");
	scanf("%s", senha);
	printf(" A senha e %s",senha);
    printf("\n Vogais na senha: ");
    for (i = 0; i < 5; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (senha[i] == vogais[j]) {
                cont += 1;
                printf("%c ", senha[i]);
                break;
            }
        }
    }

/////criptografando agora////
char a_ = 'a';
char i_ = 'i';
char u_ = 'u';
char e_ = 'e';
char o_ = 'o';

    for (i = 0; i < 5; i++) {
        if (senha[i] == a_) {
            senha[i] = i_;
        }
    	else if (senha[i]==i_){
    		senha[i]= u_;
		}
		else if (senha[i]==u_){
    		senha[i]= i_;
		    }
			else if (senha[i]==e_){
    		senha[i]= o_;
		    }
		}
    printf("\n A nova senha é %s\n", senha);
    return 0;
}