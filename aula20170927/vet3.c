#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
    int vet[N];
    int i, soma=0, produto=1 ;
    for(i = 0; i <N ; i++){
        printf("Entre com o %d  numero : ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i <N ; i++){
            soma = soma + vet[i];
            produto = produto * vet[i];
    }
    printf("Soma: %i \n", soma);
    printf("Produto: %d", produto);
    return EXIT_SUCCESS;
}
