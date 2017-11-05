#include <stdio.h>

int contarvogais(char entrada[]){
    int cont=0;
    for(int i=0; i<255; i++){
        if (entrada[i]=='a' || entrada[i]=='e' || entrada[i]=='i' || entrada[i]=='o' || entrada[i]=='u'){
            cont++;    
        }
    }
    return cont;
}


int main(){
    int cont=0, i;
    char entrada [255];
    for (i=0; i<255; i++){
        entrada[i]=' ';
    }
    fgets(entrada, 255, stdin);
    

    printf("%d", contarvogais(entrada));
    return 0;
}
