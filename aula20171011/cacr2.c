#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int delta(int a, int b, int c) {
    int d=0;
    d = b*b-4*a*c;
	return d;
}

int main() {
    int a, b, c, d, raiz1, raiz2;
    printf("Digite os coeficientes a, b e c: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = delta(a,b,c);
    if(d>0){
        raiz1 = (-b+sqrt(d))/2*a;
        raiz2 = (-b-sqrt(d))/2*a;
        printf("Raiz 1 = %d , raiz 2 = %d ", raiz1, raiz2);
    }
    if(d ==0){
        raiz1 = -b/(2*a);
        raiz2 = raiz1;
        printf("Raiz 1 = %d , raiz 2 = %d ", raiz1, raiz2);
    }
    if(d<0){
        raiz1 = NAN;
        raiz2 = raiz1;
        printf("Nao existe raiz real");
    }
    return EXIT_SUCCESS;
}
