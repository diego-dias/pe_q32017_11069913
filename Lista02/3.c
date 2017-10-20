#include <stdio.h>
#include <math.h>

int main(){
	long double a=1.0;
	long double b=1.0/sqrt(2.0);
	long double t=1.0/4.0;
	long double p=1.0;
	long double a1, pi, p1, p2;
	int i;

	for(i=0; i<10; i++){
		a1=(a+b)/2.0;
		b=sqrt(a*b);
		t-=(p*pow((a-a1),2.0));
		p*=2.0;
		a=a1;
	}

	p1 = pow((a+b),2.0);
	p2 = 4.0*t;
	pi = p1/p2;

	printf("%.20Lf\n",pi);

	return 0;
}