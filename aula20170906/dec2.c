#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	int pontos;
	int y =  1328 + rand()%(1360-1328+1);
	int ydigitado;
	int var;
	int varz;
	int z;
	int zdigitado;


	printf("Digite um dos divisores e 8192: \n");
	scanf("%d", &x);
	if(8192%x == 0) pontos++;

	printf("\nNumero sorteado: %d", y);
	var = y + 101;
	printf("\nResultado da soma de %d + 101:\n", y);
	scanf("%d", ydigitado);
	if (var == ydigitado) pontos++;

	z = rand()%100;
	printf("\nNumero sorteado: %d", z);
	varz = z*3;
	printf("\nResultado de %d * 3", z);
	scanf("%d", zdigitado);
	if (varz == zdigitado) pontos++;

	printf("\nQuantidade de pontos feitos: %d", pontos);
	return 0;
}
	
	
		
		
	
																																									