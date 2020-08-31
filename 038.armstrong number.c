#include <stdio.h>
#include <math.h>
void main()
{
    int n, x, z, y = 0, r, c, sum = 0 ;
    printf ("enter a number : ");
    scanf("%d", &n);

    x = n;
    z = x;

    while (n != 0)
    {
        n = n/10;
        y++;
    }

    while (x != 0)
    {
        r = x % 10;
        c = pow(r,y);
        sum = sum + c;
        x = x / 10;
    }

    if (sum == z)
    {
        printf ("\nThe given number is Armstrong number\n");
    }
    else
    {
        printf ("\nThe given number is not a Armstrong number\n");
    }
    return 0;
}
