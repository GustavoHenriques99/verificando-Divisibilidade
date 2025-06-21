//Receba um numero e verifique se ele é divisivel por qualquer numero entre 2 e 20.
#include <stdio.h>

int main(){
    int numb = 0;

    printf("Digite um valor: \n");
    scanf("%d", &numb);

    printf("\nO numero informado eh divisivel por: "); 

    for(int i = 2; i <= 20; i++){
        if(numb % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
