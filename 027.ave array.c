#include <stdio.h>
int main ()
{
    float n[10], sum =0, ave;
    int i;

    for (i=0; i<10; i++)
    {
        scanf ("%f",&n[i]);
        sum = sum + n[i] ;
    }

    ave = sum/10;
    printf ("The sum is : %.3f and the average is : %.3f",sum,ave);
    return 0;
}
