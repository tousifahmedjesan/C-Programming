#include <stdio.h>
main ()
{
    int a, b, c, d, x, y, gcd;

    printf ("enter the value of a, b : ");
    scanf ("%d %d",&a,&b);

    x = a;
    y = b;

    if (a == 0)
        gcd = b;

    else if (b == 0)
        gcd = a;

    else
    {

        while (b != 0)
        {
            c = b;
            b = a%b;
            a = c;
        }

        gcd = a;

    }

    printf ("\nGCD of %d & %d is : %d \n ",x,y,gcd);

    return 0;

}
