#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
	char palavra[5][256], aux [256];
	int i=0, j=0, k;
	for ( i=0; i<5;i++){
		printf("Insira a palavra %d: ", i+1);
		fgets(palavra[i], 256, stdin);
		for(j=0; j<(strlen(palavra[i])); j++){
			palavra[i][j] = tolower(palavra[i][j]);
		}
	}
	for (j=0; j<5; j++)
		for (k=1; k<5;k++){
            		if (strcmp(palavra[k-1], palavra[k])>0){
               			 strcpy(aux, palavra [k-1]);
               			 strcpy(palavra [k-1], palavra [k]);
               			 strcpy(palavra [k], aux);
            }
        }
    	printf("\n A ordem e:\n");
	for(i=0; i<5; i++){
	printf("%s", palavra[i]);
	}
}
