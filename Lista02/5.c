#include <stdio.h>

float fatorial (int x, float resp){
	if (x==1) return resp;
	return fatorial(x-1, resp*x);
}

void binomial (int n, int k){
	float nfat, kfat, nkfat;
	nfat = fatorial (n, 1);
	kfat = fatorial (k, 1);
	nkfat = fatorial (n-k, 1);
	printf("%.2f\n", (nfat/(kfat*nkfat)));
	//printf("%d\n", kfat);
	//printf("%d\n", nkfat);
}

int main(){
	int n, k;
	//float bin;
	scanf("%d %d", &n, &k);
	binomial(n, k);
	return 0;
}
