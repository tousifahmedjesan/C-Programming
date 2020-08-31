//function sum.

#include <stdio.h>

int A (int a, int b,int c,int d)
{
    int B;

    B = a+b+c+d;

    return (B);
}

int main ()
{

    int w, x, y, z, sum;

    printf("Enter the value of w,x,y,z : ");
    scanf("%d%d%d%d",&w,&x,&y,&z);

    sum = A (w,x,y,z);

    printf("the sum is(%d + %d + %d + %d = %d)",w,x,y,z,sum);

    return 0;

}

