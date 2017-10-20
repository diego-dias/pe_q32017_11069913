#include <stdio.h>
#include <math.h>

double pot (double x, double y){
	double aux=1;
	if(y==0){
        printf("1");
    }
    while(y>0){
        aux*=x;
        y--;
    }
    while(y<0){
        aux*=(1/x);
        y++;
    }
    return aux;
}

double delta (int a, int b, int c){
	return (pot(b,2)-4*a*c);
}

void baskara (int a, int b, int c){
	double delta1 = delta(a, b, c);
	double sdelta, a2;
	a2=2*a;
	//printf ()
	if(delta1>0){
		sdelta = sqrt(delta1);
		printf("%.2lf ",(-b-sdelta)/a2);
		printf("%.2lf\n",(-b+sdelta)/a2);
	}else{
		delta1*=-1;
		sdelta = sqrt(delta1);
		if((delta1/a2)<0){
			printf("%.2lf - %.2lfi ", -b/a2, -1*(sdelta/a2));
			printf("%.2lf + %.2lfi\n",-b/a2, -1*(sdelta/a2));
		}else{
			printf("%.2lf - %.2lfi ", -b/a2, sdelta/a2);
			printf("%.2lf + %.2lfi\n",-b/a2, sdelta/a2);
		}
		
	}
}

int main(){
	double a,b,c, delta;
	scanf("%lf %lf %lf", &a,&b,&c);
	//delta = delt(a, b, c);
	baskara (a, b,c);
	return 0;
}
