#include <stdio.h>

void TorreH (int n, char inicio, char meio, char final){
    if(n>0){
        TorreH (n-1, inicio, final, meio);
        printf("%c-%c ", inicio, final);
        TorreH (n-1, meio, inicio, final);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    TorreH(n, 'A', 'B', 'C');
    printf("\n");
    return 0;
}