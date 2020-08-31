#include <stdio.h>
main ()
{

    int x, n, z, reverse = 0;

    printf ("Enter the value of n : ");
    scanf ("%d",&n);

    z = n;

    while (n != 0)
    {
        x = n%10;
        reverse = reverse*10 + x;
        n = n/10;
    }

    printf ("\n\nThe reverse value of %d is : %d\n\n",z,reverse);

    return 0;

}
