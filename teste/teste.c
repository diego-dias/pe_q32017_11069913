#include <stdio.h>

int main() {
   int a;
   
   printf("Entre com um valor inteiro: ");
   scanf("%d",&a);

   if((a%2)==0)
   {
	printf("par\n");
   }
   else
   {
	printf("impar\n");
   }
   
   
   return 0;
}
