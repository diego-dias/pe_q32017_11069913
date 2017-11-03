#include <stdio.h>
#include <stdlib.h>

void zerastring (char *s, int n){
	int i;
	for(i=0; i<n; i++){
		s[i]=0;
	}
}

int tamanho(char *s){
	int i=0, cont=0;
	while(s[i]!=0){
		cont++;
		i++;
	}
	return cont;
}

void converte(char *entrada, char *convertido){
    int cont=tamanho(entrada);
    int i;
    for(i=0; i<cont; i++){
        convertido[i]=entrada[cont-1-i];
        //printf("%d-%c\n", cont-1-i, entrada[cont-1-i]);
    }
}

int main(){
    char entrada[255];
    char convertido[255];
    zerastring(entrada, 255);
    zerastring(convertido, 255);
    scanf("%s", entrada);
    converte(entrada, convertido);
    printf("%s\n",convertido);
    return 0;
}