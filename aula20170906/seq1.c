#include <stdio.h>
int main(){
	float lado, area;
	printf("Entre com o lado do quadrado");
	scanf("%f", &lado);
	area = lado*lado;
	printf("Area do quadrado:  %.3f\n", area);
	return 0;
}