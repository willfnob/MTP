#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    Matriz A;
    double detA;
    int ordem;
    printf("Entre com a ordem da matriz: ");
    scanf("%d",&ordem);
    A = criarMatriz(ordem,ordem);
    preencherMatriz(A);
    printf("Original:\n");
    imprimirMatriz(A);
    detA = determinante(A);
    printf("Determinante: %lg\n", detA);
    destruirMatriz(A);
    return EXIT_SUCCESS;
}