#include <stdio.h>
#include <conio.h>
int main()
{
 int i, j, p;
 p = 0;
 for (i = 1; i <= 9; i++)
 {
  printf("bang cuu chuong %d la : \n");
  for (j = 1; j <= 9; j++)
  {
   p = i*j;
   printf(" %d x %d = %d \n", i, j, p);
  }
  printf("\n");
 }
 return 0;
}
