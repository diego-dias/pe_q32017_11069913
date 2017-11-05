#include <stdio.h>

void inverte(char entrada[]){
    int i=254;
    while (entrada[i]==' '){
            i--;
    }
    while (i>=0){
        
        printf("%c", entrada[i]);
        i--;
    }
}

int main(){
    
    char entrada[255];
    for (int i=0; i<255; i++){
        entrada[i] = ' ';
    }
    fgets(entrada, 255, stdin);
    inverte(entrada);
    
}
