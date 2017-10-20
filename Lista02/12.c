#include<stdio.h>
int pascal(int,int);
void space(int,int);
 
int main(){
    int num,i,j,k;
    //printf("Enter the no. of rows required:");
    scanf("%d %d",&num, &k);
    printf("%d\n", pascal(num, k));
    /*for(i=0;i<num;i++){
        //space(num-i,3);
        for(j=0;j<k;j++){
            //printf("%3d",pascal(i,j));
            //space(1,3);
            
        }
        printf("\n");
    }*/
    return 0;
}
 
int pascal(int row,int column){
    if(column==0) // The 0th column element is assumed to 0
        return 1;
    else if(row==1&&column==1)
        return 1;
    else if(column>row) // assuming the element is zero (no of columns> no of rows)
        return 0;
    else
        return (pascal(row-1,column-1)+pascal(row-1,column));
}
/* 
void space(int num,int mul) {// for spaces in between elements
    int i;
    num*=mul;
    for(i=0;i<num;i++)
        printf(" ");
}*/