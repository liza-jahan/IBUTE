#include<stdio.h>
int main()
{
 int a[2][3]={ {2, 3,5},{5, 6 ,7}};
  int i,j;
  //printf("Input : ");

   for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
  {

       printf("%d  ",a[i][j]);

 }
 printf("\n");
 }
 return 0;
}
