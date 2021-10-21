
#include<stdio.h>
//using namespace std;
int main()
{
    int arr[6], i, elem;
    printf("Enter 5 Array Elements: ");
    for(i=0; i<5; i++)
      {

      scanf("%d ",arr[i]);
      }
    printf("Element to Insert: ");
    scanf("%d",elem);
    arr[i] = elem;
    printf("\nThe New Array is:\n");
    for(i=0; i<6; i++)
       {

        printf("%d",arr[i]);
       }
    //cout<<endl;
    return 0;
}
