//even & odd ....task 5


 #include <stdio.h>
 #include <conio.h>
put(int *a,int n)
 {
    int i;



    for(i=0; i<n; i++)
    {

        	printf("%d  ",a[i]);


    }

 }


int main()
{
    int a[100],b[100],c[200],i,j,k,n1,n2,n ;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf(" original array  \n");

    put(a,n);
    j=k=0;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
          b[j++]=a[i];
        else
          c[k++]=a[i];

    }

    printf(" \n even array \n");

    put(b,j);
    printf(" \n odd array \n");

    put(c,k);





    return 0;
}
