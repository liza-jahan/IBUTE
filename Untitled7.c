
#include<stdio.h>
void bubble_sort(char array[], int n);
int main(){

    char array[101];
    scanf("%s",array);
    int length;
    length=strlen(array);
    bubble_sort(array,length);
    printf("SORTED ARRAY:\n");

        printf("%s\n", array);

return 0;
}
void bubble_sort(char array[], int n){
    int temp,u=0,ima=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                u++;
            }
            ima++;
        }

    }
        printf("rrrr :%d\n",u);
        printf("liza : %d\n",ima);

}
