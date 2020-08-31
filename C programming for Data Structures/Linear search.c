#include <stdio.h>
main()
{
    int A[100],i,j,d,n;
    printf ("Enter the array size : ");
    scanf ("%d",&n);
    printf ("Enter %d elements in the arry: ",n);
    for (i=0;i<n;i++)
        scanf ("%d",&A[i]);
    printf ("Enter the value for searching: ");
    scanf ("%d",&d);
    for (i=0;i<n;i++)
    {
        if (A[i]==d)
        {
            j=i;
            break;
        }
    }

    if (A[j]==d)
        printf ("\nWe successfully find %d in step %d\n",d,i+1);
    else
        printf ("\n%d is not exist in this array.\n",d);

}
