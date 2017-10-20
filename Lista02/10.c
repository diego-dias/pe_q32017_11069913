#include <stdio.h>
#include <math.h>

int fibMem [1000];

void zera (int n){
    int i;
    for (i=0; i<1000; i++){
        fibMem[i] = 0;
    }
}

int confere (int n){
    if (fibMem[n]==0) return 0;
    return 1;
}

void completa (int n1, int n2){
    //if (fibMem[n1]==0) fibMem[n1]=fibMem[n1-1]+fibMem[n1-2];
    //printf("fibMem[n1]=%d\n", fibMem[n1]);
    //if (fibMem[n2]==0) fibMem[n2]=fibMem[n2-1]+fibMem[n2-2];
    //printf("fibMem[n2]=%d\n", fibMem[n2]);
    fibMem[n1+1]=fibMem[n1]+fibMem[n2];
    //printf("fibMem[n1+1]=%d\n", fibMem[n1+1]);
}

int fib (int n){
    if (n==0) return 0;
    if (n<=2) return 1;
    if (confere(n)==1) return fibMem[n];
    //completa (n-1, n-2);
    return fib (n-1) + fib (n-2);
}

int main(){
    int n=0;
    zera(n);
    fibMem[1]=1;
    fibMem[2]=1;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    completa(n-1, n-2);     //não entendi bem quais posições deveriam ser completadas
    return 0;
}
