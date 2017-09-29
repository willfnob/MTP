#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float b, c, a;
    double A;
    printf("Entre com os lados do triangulo bc e com o angulo em radianos entre eles: ");
    scanf("%f,%f, %lf", &b, &c, &A);
    a = sqrt(pow(b,2)+ pow(c,2) - (2*b*c*cos(A)));
    printf("Medida: %f\n", a);
    return EXIT_SUCCESS;
}