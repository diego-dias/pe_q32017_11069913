#include <stdio.h>

int main(){
    int v1[5], v2[5], v3[5];
    for (int i=0; i<5; i++){
        scanf("%d", &v1[i]);
    }
    for (int i=0; i<5; i++){
        scanf("%d", &v2[i]);
        v3[i] = v2[i] + v1[i];
    }
    
    for (int i=0; i<5; i++){
        printf("%d ", v3[i]);
    }
}
