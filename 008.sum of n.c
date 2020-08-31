#include <stdio.h>
#include <conio.h>
void main ()
{
    int i, n, sum = 0;
    printf ("Enter the value of n : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
    sum = sum+i;
	}
    printf ("\n\nThe summation of 1+2+3+....+%d = %d\n\n",n, sum);
    return 0;
}
