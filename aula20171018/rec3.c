#include <stdio.h>
#include <stdlib.h>
int mdc(int x, int y){
    if(x%y == 0){
        return y;
    }
    else{
        return mdc(y, x%y);
    }
}
int somafracao(int num1, int den1, int num2, int den2, int *pnumr, int *pdenr){
    int x, y;
    if(den1 == 0 || den2 == 0)
        return 0;
    else{
        x = den2*num1 + den1*num2;
        y = den1*den2;
        *pnumr = x/mdc(x,y);
        *pdenr = y/mdc(x,y);
        return 1;
    }
}
int main(){
    int num1, den1,num2, den2, numr, denr;
    printf("Entre com um numero racional na forma num/den: ");
    scanf("%d/%d", &num1, &den1);
    printf("\nEntre com outro numero racional na forma num/den: ");
    scanf("%d/%d", &num2, &den2);
    if(somafracao(num1, den1, num2, den2, &numr, &denr))
       printf("resultado da soma = %d/%d", numr, denr);
    else{
        printf("Erro!\n");
    }
    return EXIT_SUCCESS;
}
