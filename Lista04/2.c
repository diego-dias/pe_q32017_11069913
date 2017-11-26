#include <stdio.h>

struct medicao{
    int min;
    int seg;
    int cen;
};


int main(){
    
    struct medicao med1, med2, res; 
    int med1c, med2c;
    scanf("%dm %ds %d", &(med1.min), &(med1.seg), &(med1.cen));
    scanf("%dm %ds %d", &(med2.min), &(med2.seg), &(med2.cen));
    med1c = med1.min*6000 + med1.seg*100 + med1.cen;
    med2c = med2.min*6000 + med2.seg*100 + med2.cen;
    
    med2c-=med1c;
    if (med2c<0){
        printf("-");
        med2c*=(-1);
    }
    res.min = med2c/6000;
    med2c%=6000;
    res.seg = med2c/100;
    med2c%=100;
    res.cen = med2c;
    printf("%dm %ds %d", res.min, res.seg, res.cen);
    
    return 0;


}
