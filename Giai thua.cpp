#include<stdio.h>    

int main(){  
  int i,giaithua=1,a;  
  
  printf("Nhap mot so bat ky: ");  
  scanf("%d",&a);  
  
  for(i=1;i<=a;i++){  
      giaithua=giaithua*i;  
  }  
  printf("\nGiai thua cua %d la: %d",a,giaithua);
  
  return 0;
  
}

