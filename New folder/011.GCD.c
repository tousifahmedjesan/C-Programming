#include <stdio.h>
int main ()

{

    int a, b, c, gcd;

    printf("Enter the value a & b : ");
    scanf ("%d %d",&a,&b);

    if (a<b)
        c = a;

    else
        c = b;

    for (c; c>= 1; c--)
    {
        if (a%c==0 && b%c==0)
        {
        gcd = c;
        break;
        }
    }

    printf ("\nGCD of %d and %d is : %d\n",a,b,gcd);

    return 0;

}
