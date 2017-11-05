#include <stdio.h>

void transpoe(int mat[3][3]){
    for(int j=0; j<3; j++){
        for (int i=0; i<3; i++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[3][3];
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    
    
    
   transpoe(mat);
   
}
