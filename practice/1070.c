#include<stdio.h>
int main (void)
{
    int i, j;
    scanf ("%d",&j);
    for (i=j; i<j+12; i++)
	{
		if (i%2!=0)
			printf ("%d\n",i);
	}
    return 0; 
}
