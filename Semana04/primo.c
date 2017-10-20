#include <stdio.h>
#include <stdlib.h>

void zerastring (char *s, int n){
	int i;
	for(i=0; i<n; i++){
		s[i]=0;
	}
}

char conferePrimo(int n){
	/*if(i==1) return '1';
	else if(n%i==1) return '0';
	return conferePrimo(n, i-1);*/
	int div=0, i;
  
	for (i = 1; i <= n; i++) {
	    if (n % i == 0) { 
	    div++;
    	}
  	}
    
  	if (div == 2)
    	return '1';
  	else
    	return '0';

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
	scanf("%d", &n);
	primo = malloc (n*sizeof(char));
	zerastring (primo, n);
	for(i=2; i<n; i++){
		primo[i]=conferePrimo(i);
		//printf("%c ", conferePrimo(i));
	}
	printf("%d\n", soma(primo, n));
	return 0;
}
