#include <stdio.h>
#include <stdlib.h>

void contarepeticoes(int vet[], int n){
    int cont=1;
    for (int i=0; i<n; i++){
        for (int j=(i+1); j<n; j++){
            if (vet[i]==vet[j]){
                cont++;
                for (int k=j; k<(n-1); k++){
                    vet[k] = vet[k+1];
                }
                n--; j--;
            }
        }
        if (cont>1){
            printf("%d-%d ", vet[i], cont);
        }
        cont=1;
    }
}

int main(){
    int n, *vet;
    scanf("%d", &n);
    vet = (int *) malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    contarepeticoes(vet, n);
    
}
