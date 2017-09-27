#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
	int i, numeros[N], invertido[N];
	for(i = 0; i < N; i++) {
        printf("Entre com o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
	}
	printf("O vetor invertido e: ");
	for(i = 0; i < N; i++) {invertido[i] = numeros[N - i -1];
    	printf("%d ", invertido[i]);}
    return EXIT_SUCCESS;
}

