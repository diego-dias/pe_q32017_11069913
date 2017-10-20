#include <stdio.h>
#include <math.h>

void C_to_F (float valor){
    printf("%.2f F\n",(valor*1.8)+32);
}

void C_to_K (float valor){
    printf("%.2f K\n",valor+273.15);
}

void F_to_C (float valor){
    printf("%.2f C\n",(valor-32)/1.8);
}

void F_to_K (float valor){
    printf("%.2f K\n",((valor-32)/1.8)+273.15);
}

void K_to_C (float valor){
    printf("%.2f C\n",valor-273.15);
}

void K_to_F (float valor){
    printf("%.2f F\n",(((valor-273.15)*1.8)+32));
}

void dec_bin (int n){
    //int n = valor;
    float resp=0, aux=1;
    do{
            resp = resp + (aux*(n%2));
            n /=2;
            aux*=10;
        }while((n)!=0);
        printf("%.0f\n", resp);
}

void bin_dec (int n){
    float resp=0, aux=1;
    do{
            resp = resp + (aux*(n%10));
            n /=10;
            aux*=2;
        }while((n)!=0);
        printf("%.0f\n", resp);
}

void entrada_numerico (int entrada, int saida, float valor){
    int vl = valor;
    if(entrada==1){
        if(saida==1){       //dec->dec
            printf("%.0f\n", valor);
        }else{              //dec->bin
            dec_bin(vl);
        }
    }else{
        if(saida==1){       //bin->dec
            bin_dec(vl);
        }else{              //bin->bin
            printf("%.0f\n", valor);
        }
    }
}

void entrada_temperatura (int entrada, int saida, float valor){
    if (entrada==1){
        if (saida==1) {                 //C->C
            printf ("%.2f C\n", valor);
        }else if (saida==2) {           //C->F
            C_to_F(valor);
        }else {                         //C->K
            C_to_K(valor);
        }
    } else if (entrada==2) {
        if (saida==1) {                 //F->C
            F_to_C(valor);
        }else if (saida==2) {           //F->F
            printf("%.2f F\n", valor);
        }else {                         //F->K
            F_to_K(valor);
        }
    } else {
        if (saida==1) {                 //K->C
            K_to_C(valor);
        }else if (saida==2) {           //K->F
            K_to_F(valor);
        }else {                         //K->K
            printf("%.2f K\n", valor);
        }
    }
}

int main(){
    int tipo, entrada, saida;
    float valor;
    
    scanf("%d %d %d %f", &tipo, &entrada, &saida, &valor);
    
    switch (tipo){
        case 1:
            entrada_temperatura(entrada, saida, valor);
            break;
        case 2:
            entrada_numerico(entrada, saida, valor);
            break;
    }
    return 0;
}