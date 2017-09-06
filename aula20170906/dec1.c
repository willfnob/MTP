#include <stdio.h>
int main(){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if(x%2){
		printf("Impar");
		if(x%5 == 0) printf("\nMultiplo de 5");}
	else{
		printf("\nPar");
		if(x%3 == 0) printf("\nMultiplo de 3");
		if(x%7 == 0) printf("\nMultiplo de 7");
	}
	return 0;
}
	
																																									