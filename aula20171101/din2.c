#include <stdio.h>
#include <stdlib.h>

void preenche(float * elemento) {
  scanf("%f", elemento);
}
void imprime(float **matriz, int N, int M) {
  int i, j;
  float mat[M][N], aux;
  printf("matriz %dx%d:\n", M, N);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++){
        mat[j][i] = matriz[i][j];
    }
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            printf("%g%c", mat[i][j], (j == M-1)? '\n':'\t');
}

int main() {
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%dx%d", &N, &M);
  matriz = calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  imprime(matriz, N, M);
  for(i = 0; i < N; i++)
	free(matriz[i]);
  free(matriz);
  return 0;
}
