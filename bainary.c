#include <stdio.h>
#include <string.h>
main ()
{
    int e,f,g,h,i,j,k,l,m,n;
    scanf ("%d",&n);
    while ( n != 0 )
    {
        m=n%2;
        n=n/2;
        l=(printf ("%d",m)-1);
    }
    //printf ("%d",l);
    while ( l >= 0 )
    {
        k=l%10;
        l=l/10;
        printf ("%d",k);
    }

}
