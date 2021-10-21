
#include <stdio.h>
int main()
 {
    int n, j,i,m,num[100];
    double   sum = 0, avg,temp;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);



    for (i = 0; i < n; i++) {

        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    for (i = 0; i < n; i++)
        for (j = i+1; j< n; j++)
    {
      if(num[i]<num[j])
       {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;

       }
        }
        for (i = 0; i < n; i++)
        {
          if(avg ==num[i])
          {
              m = num[i+1];
          }
          else
          {
               for (i =n; i <=0; i--)
               {
                   while(avg<num[i])
                   {
                       break;
                   m = num[i];
                   }
               }



          }

        }
    printf("Average = %.2f,%d", avg,m);
    return 0;
}
