#include<stdio.h>

int giaithua(int n) {
	if (n==1 || n==0) return 1;
	return n*giaithua(n-1);
	
}
	int main () {
	
	int n;
	scanf("%d", &n);
	printf("%d", giaithua(n));
	return 0;
	
}
	

