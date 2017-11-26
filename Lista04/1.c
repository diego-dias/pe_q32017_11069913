#include <stdio.h>
#include <math.h>


struct ponto{
    float x;
    float y;
    float z;
};


int main(){
    struct ponto p1, p2;
    float dist;

    scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
    scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
    dist = pow(pow((p1.x-p2.x), 2)+pow((p1.y-p2.y), 2)+pow((p1.z-p2.z), 2), 0.5);
    printf("%.2f", dist);
    
    return 0;
    
    
}
