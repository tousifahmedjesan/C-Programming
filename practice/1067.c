#include<stdio.h>
int main (void)
{
    int i, j;
    scanf ("%d",&j);
    for (i=0; i<=j; i++)
	{
		if (i%2!=0)
			printf ("%d\n",i);
	}
    return 0; 
}
