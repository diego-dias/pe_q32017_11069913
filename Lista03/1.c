#include <stdio.h>
#include <stdlib.h>

void zerastring (char *s, int n){
	int i;
	for(i=0; i<n; i++){
		s[i]=0;
	}
}

int contavgl(char *ent){
    int i=0, cont=0;
    while(ent[i]!=0){
        if (ent[i]=='a'||ent[i]=='i'||ent[i]=='u'||ent[i]=='e'||ent[i]=='o') cont++;
        //printf("%d - %c\n", i, ent[i]);
        i++;
    }
    return cont;
}

int main(){
    //typedef char *string;
    char entrada[255];
    zerastring(entrada, 255);
    fgets(entrada, 255, stdin);
    //scanf("%s", entrada);
    printf("%d\n",contavgl(entrada));
    return 0;
}
