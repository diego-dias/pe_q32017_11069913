#include <stdio.h>
#include <stdlib.h>



struct ficha{
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
};


int main(){
    int i;
    struct ficha alunos[50];
    FILE *ler, *escrever;
    ler = fopen("lista_alunos.txt", "r");
    fscanf(ler, "\%s \%d \%f \%f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
    
    for (i=0; i<50; i++){
        alunos[i].media = (alunos[i].p1+alunos[i].p2+alunos[i].p3)/3;
    }
    
    fprintf (escrever, "\%s \%d \%f \%f %f %f\n", alunos[i].nome, alunos[i].ra , alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
    
}
