#include<stdio.h>
int main (void)
{
    int i, j, k;
    
    for (i=1; i<=9; i+=2)
	{
		for (j=i+6,k=1;k<=3;k++,j--)
			printf ("I=%d J=%d\n",i,j);
	}
    return 0; 
}
