#include <stdio.h>

int main()
{
   int arr[100], pos, c, n, value;

   scanf("%d", &n);

   printf(" Elements, n");

   for (c = 0; c < n; c++)
      scanf("%d", &arr[c]);

   printf(" location  to insert an element : ");
  scanf("%d", &pos);

   printf("Insert value : ");
   scanf("%d", &value);

   for (c = n - 1; c >= pos - 1; c--)
      arr[c+1] = arr[c];

   arr[pos-1] = value;

   printf("Output : ");

   for (c = 0; c <= n; c++)
      printf("%d\n", arr[c]);

   return 0;
}

