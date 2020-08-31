#include <stdio.h>
#include <conio.h>
int Quick_sort (int A[], int s, int e )
{
    int i=s,j=e,t=A[s],c=1;
    while (i<j)
    {
        if (c)
        {
            if (t>A[j])
            {
                A[i]=A[j];
                c=0;
                i++;
            }
            else
                j--;
        }
        else
        {
            if (t<A[i])
            {
                A[j]=A[i];
                c=1;
                j--;
            }
            else
                i++;
        }
    }
    A[j]=t;
    return j;
}
int divide (int A[],int s, int e)
{
    int t;
    if (s<e)
    {
        t= Quick_sort(A,s,e);
        divide(A,s,t-1);
        divide(A,t+1,e);
    }
}
int main ()
{
    int A[100],n,i;
    printf ("Enter the value of array size : ");
    scanf ("%d",&n);
    printf ("Enter %d unsorted array elemnts : ",n);
    for (i=0; i<n;i++)
        scanf ("%d",&A[i]);
    divide (A,0,n-1);
    printf ("Array elemnts after Quick sort : ");
    for (i=0; i<n;i++)
        printf ("%d, ",A[i]);
}
