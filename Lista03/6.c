#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

void calculamediana(float vet[], int n){
    float mediana;
    if (n%2==0){
        mediana = (vet[n/2]+vet[(n/2)-1])/2;
    } else {
        mediana = vet[n/2];
    }
    printf("%.2f", mediana);
}

int main(){
    int n;

    scanf("%d", &n);
    float *vet;
    vet = (float*) malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        scanf("%f", &vet[i]);
    }
    qsort(vet, n, sizeof(int), cmpfunc);
    calculamediana(vet, n);
    
    
}
