#include <stdio.h>
#include <stdlib.h>

void 1EmTudo (char *s, int n){
	int i;
	for(i=0; i<n; i++){
		s[i]=1;
	}
	s[0]=0;
	s[1]=0;
}

void multiplo (char *p, int n, int num){
	int i;
	for(i=num+1; i<n; i++){
		if(i%num==0) p[i]=0;
	}
}

int soma (char *primo, int n){
	int i, cont=0;
	for(i=0; i<n; i++){
		if(primo[i]=='1') cont++;
	}
	return cont;
}

int main(){
	int n, i;
	char *primo;
	scanf ("%d", &n);
	primo = malloc(n*sizeof(char));
	1EmTudo (primo, n);
	for(i=2; i<n; i++){
		multiplo(primo, n, i);
	}
	printf("%d\n", soma(primo, n));
	return 0;
}
