#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 256

int main(){
	char frase[N];
	int c = 0;
	printf("Entre com uma frase:\n");
	fgets(frase,N,stdin);
	for(int i = 0; frase[i]; i++){
		if(isalpha(frase[i]))
			c++;
	}
		
	printf("Numero de letras = %d!", c);
	return EXIT_SUCCESS;
}
