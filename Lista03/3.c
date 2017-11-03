#include <stdio.h>
#include <stdlib.h>

void levetor (int *v, int n){
    int i;
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
}

void soma(int *v1, int *v2, int *v3, int n){
    int i;
    for(i=0; i<n; i++){
        v3[i]=v1[i]+v2[i];
        printf("%d ", v3[i]);
    }
    printf("\n");
}

int main(){
    int v1[5], v2[5], v3[5];
    levetor(v1, 5);
    levetor(v2, 5);
    soma(v1, v2, v3, 5);
    return 0;
}