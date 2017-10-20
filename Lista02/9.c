#include <stdio.h>

double pot (double x, double y, double resp){
    if(y==0) return resp;
    pot (x,y-1,resp*x);
}

int main(){
    double x, y;
    scanf("%lf %lf",&x, &y);
    printf("%.0lf\n", pot(x, y, 1));
    return 0;
}