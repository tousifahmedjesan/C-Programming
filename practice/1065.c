#include<stdio.h>
int main (void)
{
    int a[5], b, c, d, e, i, j, k, l=0;
    for (i=0; i<5; i++)
    	scanf ("%d",&a[i]);
    for (i=0; i<5; i++)
        if (a[i]%2==0)
            l++;
    printf ("%d valores pares\n",l);
    return 0; 
}
