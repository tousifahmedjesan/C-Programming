#include <stdio.h>
int main ()
{
    int a[100],i,j,k,t,b,L,n;
    printf ("Enter the array size : ");
    scanf ("%d",&n);
    printf ("Enter the array elements before sorting: \n");
    for (i=0; i<n; i++)
        scanf ("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        L=i;
        t=a[i];
        b=a[i];
        for(j=i+1;j<n;j++)
        {
            if (t>a[j])
            {
                t=a[j];
                L=j;
            }
        }
        a[i]=a[L];
        a[L]=b;

        printf ("k=%d Loc=%d\n",i,L);
        printf ("____________\n");
        for (j=0;j<n;j++)
            printf ("%d,",a[j]);
        printf ("\n");
    }
}
