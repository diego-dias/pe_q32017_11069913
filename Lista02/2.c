#include <stdio.h>

int main(){
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("%.2lf\n", x*y*z);
	return 0;
}