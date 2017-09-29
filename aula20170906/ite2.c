#include <stdio.h>
int main (){
    int b, p;
    int i, potencia;
    printf("Entre com a base: ");
    scanf("%d", & b); getchar();
    printf("Entre com a potencia: ");
    scanf("%d", & p); getchar();
    potencia = b;
    for(i=1; i< p; i++)
        potencia = potencia*b;
    printf("potencia: %d\n", potencia);
    return 0;
}
