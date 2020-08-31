#include <stdio.h>
int main ()
{
    int a[100],i,j,k,t,n;
    printf ("Enter the array size : ");
    scanf ("%d",&n);
    printf ("Enter the array elements before sorting: \n");
    for (i=0; i<n; i++)
        scanf ("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf ("Result after sorting: ");
    for (i=0;i<n;i++)
        printf ("%d ",a[i]);
}
