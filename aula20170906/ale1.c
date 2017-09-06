#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int x = rand()%100;
	printf("Entre 0 e 99: %d\n",x);
	int y =  101 + rand()%(293-101+1);
	printf("Entre 101 e 293: %d\n",y); 
	return 0;
}