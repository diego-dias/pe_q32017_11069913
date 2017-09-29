# include <stdio.h>

double fatorial(double);
double potencia(double, double);

int main(){
	
	double pi, cte, soma=0, var1, var2,a,b,c,d,e,f;
	double infinito;
	//cte = (2*sqrt(2))/9801;
	scanf("%lf", &infinito);

	//somatorio
	for(int k=0; k<=infinito; k++){
		var1 = fatorial(k);
		var2 = (3*k)+(3/2);
		a=potencia(-1,k);
		b=fatorial(6*k);
		c=13591409+(545140134*k);
		d=fatorial(3*k);
		e=potencia(var1,3);
		f=potencia(640320,var2);
		soma+=(a*b*c)/(d*e*f);
		//soma += aux;
		//soma+=((fatorial(4*k))*(1103+26390*k))/((potencia(var1,4))*(potencia(396,(4*k))));

	}

	printf("a=%lf\n", a);
	printf("b=%lf\n", b);
	printf("c=%lf\n", c);
	printf("d=%lf\n", d);
	printf("e=%lf\n", e);
	printf("f=%lf\n", f);
	printf("a*b*c=%lf\n", a*b*c);
	printf("d*e*f=%lf\n", d*e*f);
	printf("soma=%lf\n", soma);

	pi = 1/(soma*12);

	printf("PI=%lf\n", pi);

	return 0;
}


double fatorial(double valor){
	double fat;
	if(valor==0){
        fat = 1;
    }
    fat = valor;
    volta:
    if(valor>1){
        fat *= valor-1;
        valor -= 1;
    }
    if(valor>1) goto volta;

	return fat;
	
}

double potencia(double n, double fator){
	double aux=1;
	if(fator==0){
        printf("1");
    }
    
    while(fator>0){
        aux*=n;
        fator--;
    }

	return aux;
	
}

