#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b){
    return ( *(int*) a - *(int*) b);
}

void le_vetor(int *vetor, int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void faz_media(int *vetor, int tamanho){
    int i;
    float media = 0.0;
    for(i=0; i<tamanho; i++){
        media += vetor[i];
    }
    printf("%.2f\n", media/tamanho);
}

int main(){
    int tamanho;
    int *vetor;
    scanf("%d", &tamanho);
    vetor = (int*) malloc(tamanho*sizeof(int));
    le_vetor(vetor, tamanho);
    qsort(vetor, tamanho, sizeof(int), cmpfunc);
    faz_media(vetor, tamanho);
    return 0;
}