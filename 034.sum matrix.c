
#include <stdio.h>
int main()
{
   int m, n, c, d, first[50][50], second[50][50], sum[50][50];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);

   printf("\n\nEnter the elements of first matrix\n");

   for (c = 0; c < m; c++)
   {
      for (d = 0; d < n; d++)
      {
      	 printf ("\nEnter the the element of a(%d,%d) : ",c+1,d+1);
         scanf("%d", &first[c][d]);
      }
   }

   printf("\n\nEnter the elements of second matrix\n");

   for (c = 0; c < m; c++)
   {
      for (d = 0 ; d < n; d++)
      {
      	    printf ("\nEnter the the element of b(%d,%d) : ",c+1,d+1);
            scanf("%d", &second[c][d]);
      }
   }

   printf("\nSum of entered matrices:\n");

   for (c = 0; c < m; c++)
    {
      for (d = 0 ; d < n; d++)
       {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
