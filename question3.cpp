
#include<stdio.h>
int main()
{
   int n, a[100];

   scanf("%d", &n);

   printf("Input : ");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("OUTPUT : ");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     {
         printf("%d %d ", a[i],a[i]);
     }
   }



   return 0;
}
