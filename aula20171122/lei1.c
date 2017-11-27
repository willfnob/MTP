#include <stdio.h>
#include <ctype.h>

void gravar (char * texto){
    FILE * arquivo = NULL;
    arquivo=fopen ("meutexto.txt", "a");
    if (arquivo == NULL){
        fprintf (stderr, "Problema na gravação\n");
    }
    fputs(texto, arquivo);
    fclose (arquivo);
}

void recuperar(){
    char * Texto = NULL;
    char a;
    int tam=0;
    FILE * arquivo = NULL;
    arquivo = fopen ("meutexto.txt", "r");
    if (arquivo == NULL){
        fprintf (stderr, "Arquivo inexistente\n");
        exit (0);
    }
    while (!feof(arquivo)){
        tam++;
        a = fgetc(arquivo);
        Texto=(char*)realloc(Texto, sizeof(char)*tam);
        Texto[tam-1]=a;
    }
    Texto[tam]='\0';
    printf ("\n%s", Texto);
}

main (){
    char c;
    int t=0;
    char * texto= NULL;
    recuperar();
    printf ("\n\nEscreva seu texto: \nDigite \\ para terminar\n");
    do {
        c=getchar ();
        t++;
        texto=(char*)realloc (texto,t*sizeof(char));
        texto[t-1]= toupper(c);
    }while (c!='\\');
    texto[t-1]='\0';
    gravar(texto);
    recuperar();
    free (texto);
}
