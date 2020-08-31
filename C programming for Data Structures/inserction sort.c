#include <stdio.h>
int main ()
{
    int a[100],i,j,k,t,n;
    printf ("Enter the array size : ");
    scanf ("%d",&n);
    printf ("Enter the array elements before sorting: \n");
    for (i=0; i<n; i++)
        scanf ("%d",&a[i]);
    for (i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf ("Result after sorting: ");
    for (i=0;i<n;i++)
    printf ("%d ",a[i]);

}
