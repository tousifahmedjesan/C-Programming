#include <stdio.h>
int main ()
{
    float n[500], sum =0, ave;
    int N, i;
    printf ("Enter the value of N : ");
    scanf ("%d",&N);

    for (i=0; i<N; i++)
    {
        scanf ("%f",&n[i]);
        sum = sum + n[i] ;
        continue;
    }

    ave = sum/10;
    printf ("The sum is : %.3f and the average is : %.3f",sum,ave);
    return 0;
}
