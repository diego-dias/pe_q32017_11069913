#include <stdio.h>

int inverso (int n, int resp){
    if(n==0) return resp;
    return inverso (n/10, (resp*10)+(n%10));
}

int main(){
    int n;
    scanf("%d", &n);
    if(n==inverso(n,0))
        printf("sim\n");
    else
        printf("nao\n");
    return 0;
}