#include<stdio.h>

int main()
{
	float tongkm;
	float cuoc;
	printf("Nhap vao so km");
	scanf("%f", &tongkm);
	if (tongkm<=1) {
		printf("So tien phai tra la %f D:", cuoc=5000);
	}
		else if( tongkm>1 && tongkm<=30) {
		printf("so tien phai tra la %f D:", cuoc=(tongkm - 1)*4000 + 1*5000);
	}
		else {
		printf("so tien phai tra la %f D",  cuoc = 1*5000 + 29*4000 + (tongkm - 30)*3000);	
		}
	return 0;
	
}
