#include <stdio.h>
#include <stdlib.h>

int fracao(int num1, int num2, int * Quo, int * Resto){
    if(num2 == 0 )
        return 0;
    else{
            *Quo = num1 / num2;
            *Resto = num1 % num2;
        return 1;
    }

}

int main(){
    int num1, num2, den1, den2, Quo, Resto;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num1);
    printf("Entre com outro numero inteiro: ");
    scanf("%d", &num2);
    if (fracao(num1, num2, &Quo ,&Resto)){
        printf("Resultado da divisao = %d \n",Quo);
        printf("Resultado do resto = %d \n",Resto);
    }
    else
        printf("Erro!");
return 0;
}
