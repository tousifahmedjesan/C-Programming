#include <stdio.h>
main ()
{
    int A[10]={2, 5 ,13, 16 ,77};
    int b=0,e=4,m=(b+e)/2,d=A[m],i;
    for (i=1; i<=5; i++)
    {
        if (d==13)
            break;
        else if (13>d)
        {
            b=m+1;
            m=(b+e)/2;
            d=A[m];
        }
        else if (13<d)
        {
            e=m-1;
            m=(b+e)/2;
            d=A[m];
        }
    }
    if (d==13)
        printf ("\nWe successfully find 13 in step %d\n",i);
    else
        printf ("\n13 is not exist in this array.\n");

}
