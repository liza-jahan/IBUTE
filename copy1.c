
#include <stdio.h>

int main()
{
 int list[100],list2[100];
 int n;
 int i,j;


 scanf("%d",&n);

 //cout<<" enter list programology conetnt"<<endl;

printf("Input A[%d] =  " ,n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&list[i]);
 }
// for(i=0;i<n;i++)
// {
 //list2[i]=list[i];
// }//programology content
 printf("b[%d]= ",n);
 for(i=0;i<n;i++)
{


 printf(" %d ",list[i]);
}
return 0;

}
