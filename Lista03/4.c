#include <stdio.h>
#include <stdlib.h>

void le_transpoe(int m[][3], int mt[][3], int n){
    int i, k;
    for(i=0; i<n; i++){
        for(k=0; k<n; k++){
            scanf("%d", &m[i][k]);
            mt[k][i]=m[i][k];
        }
    }
}

void imprime (int m[][3], int n){
    int i, k;
    for(i=0; i<n; i++){
        for(k=0; k<n; k++){
            printf("%d ", m[i][k]);
        }
        printf("\n");
    }
}

int main(){
    int **m[3][3];
    int **mt[3][3];
    le_transpoe(m, mt, 3);
    imprime(mt, 3);
    return 0;
}