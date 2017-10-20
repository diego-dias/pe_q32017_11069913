#include <stdio.h>

int dec_to_bin (int n, int resp, int aux){
    if (n==0) return resp;
    return dec_to_bin (n/2, resp+(n%2)*aux, aux*10);
}

int bin_to_dec (int n, int resp, int aux){
    if(n==0) return resp;
    return bin_to_dec (n/10, resp+(n%10)*aux, aux*2);
}

int main(){
    
    int n, opcao, resp=0, aux=1;
    
    scanf("%d", &n);
    scanf("%d", &opcao);
    
    if(opcao==1){       //dec->bin
        printf("%d\n", dec_to_bin(n, 0, 1));
    }else if(opcao==2){ //bin->dec
        printf("%d\n", bin_to_dec(n, 0, 1));
    }
    return 0;
}