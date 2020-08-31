#include <stdio.h>
#define A[100]
int merging (int l, int m, int h)
{
    int B[100],i,j,k;
    for (i=l,j=m+1,k=l;i<=m&&j<=h;k++)
    {
        if (A[i]<=A[j])
            B[k]=A[i++];
        else
            B[k]=A[j++];
    }
    while (i<=m)
        B[k++]=A[i++];
    while (j<=m)
        B[k++]=A[j++];
    for (i=l;i<=h;i++)
        A[i]=B[i];
}

int sort (int l, int h)
{
    int m;
    if (l<h)
    {
        m=(l+h)/2;
        sort (l,m);
        sort (m+1,h);
        merging(l,m,h);
    }
}
int main ()
{
    int n,i;
    printf ("Enter the value of array size : ");
    scanf ("%d",&n);
    printf ("Enter %d unsorted array elemnts : ",n);
    for (i=0; i<n;i++)
        scanf ("%d",&A[i]);
    sort (A,0,n-1);
    printf ("Array elemnts after Quick sort : ");
    for (i=0; i<n;i++)
        printf ("%d, ",A[i]);
}
