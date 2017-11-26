#include <stdio.h>
#include <time.h>
#include <limits.h>


#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

int msb(int x){
    int cont=0;
    while (x){
        x = x >> 1;
        cont ++;
    }
    return cont;
}

ulint f1(ulint x, ulint y){

    if(x<y){
        return 1;
    }
    return 0;
}

ulint f2(ulint x, ulint y){
    int a, b;
    a = msb(x&(x^y));
    b = msb(y&(x^y));
    if (a>b){
        return a;
    } else {
        return b;
    }
}

int main(){
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    
    tempo_init = clock();
    int i;
    for (i=0; i<BIGNUM-1; i++){
        soma += f1(i, i+1);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);
    
    tempo_init = clock();
    for (i=0; i<BIGNUM-1; i++){
        soma += f2(i, i+1);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);
    
    return 0;
}
