#include <stdio.h>
#include <math.h>

void soma (float x, float y){
    printf ("%.2f\n", x+y);
}

void sub (float x, float y){
    printf ("%.2f\n", x-y);
}

void mult (float x, float y){
    printf ("%.2f\n", x*y);
}

void div (float x, float y){
    printf ("%.2f\n", x/y);
}

void pot (float x, float y){
    float aux=1;
    if(y==0){
        printf("1");
    }
    while(y>0){
        aux*=x;
        y--;
    }
    while(y<0){
        aux*=(1/x);
        y++;
    }
    printf("%.2f\n",aux);
}

int main(){
    float x, y;
    int op;
    
    scanf("%d %f %f", &op, &x, &y);
    
    switch (op){
        case 1:
            soma(x,y);
            break;
        case 2:
            sub(x,y);
            break;
        case 3:
            mult(x,y);
            break;
        case 4:
            div(x,y);
            break;
        case 5:
            pot(x,y);
            break;
    }
    return 0;
}