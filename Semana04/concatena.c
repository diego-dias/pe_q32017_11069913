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

void concatena(char *s1, char *s2){
	int t1, t2, i;
	char *s3;
	t1=tamanho(s1);
	t2=tamanho(s2);
	s3 = malloc ((t1+t2)*sizeof(char));
	zerastring (s3, t1+t2);
	for(i=0; i<t1; i++){
		s3[i]=s1[i];
	}
	for(i=0; i<t2; i++){
		s3[i+t1]=s2[i];
	}
	printf("%s\n", s3);
}

int main(){
	char *s1, *s2;
	//typedef char *string; //posso usar string no lugar de char *
	int n;
	scanf("%d", &n);
	s1 = malloc (n*sizeof(char));
	s2 = malloc (n*sizeof(char));
	zerastring(s1, n);
	zerastring(s2, n);
	scanf("%s %s", s1, s2);
	concatena(s1, s2);
	
	return 0;
}
