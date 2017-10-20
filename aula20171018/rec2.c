#include <stdio.h>
#include <stdlib.h>
void reverter(char * str) {
    if(*str) {
        reverter(str+1);
        printf("%c",*str);
    }
}
int main() {
    char str[256];
    printf("Entre com uma frase: ");
    fgets(str, 256, stdin);
    printf("Frase revertida: ");
    reverter(str);
    return 0;
}