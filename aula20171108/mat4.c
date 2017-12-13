#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"
int main()
{
Matriz A,B,C;
int colunaA,linhaA, colunaB,linhaB, i, acumula;
printf("Insira a ordem da matriz A: ");
scanf("%d,%d", &linhaA, &colunaA);
printf("\nInsira a ordem da matriz B: ");
scanf("%d,%d", &linhaB, &colunaB);
if(colunaA==linhaB)
{
A=criarMatriz(linhaA,colunaA);
B=criarMatriz(linhaB,colunaB);
C=criarMatriz(colunaA,linhaB);
printf("\nPreencha a matriz A: ");
preencherMatriz(A);
printf("\nPreencha a matriz B: ");
preencherMatriz(B);
C = producted(A,B,C,linhaA,colunaA, linhaB,colunaB);
imprimirMatriz(C);
destruirMatriz(C);
destruirMatriz(A);
destruirMatriz(B);
}
else
printf("Nao foi possivel multiplicar as matrizes \n\n");
return 0;
}
