#include <stdio.h>
int main()
{
    char c;

    printf ("\n\t\t\t\t\tThe ASCII values of capital latter are : \n\n");
    for (c=65;c<=90;c++)
    {
        printf ("\t\t\t%c = %d",c,c);
    }

    printf ("\n\n\t\t\t\t\tThe ASCII values of smallest latter are : \n\n");
     for (c=97;c<=122;c++)
    {
        printf ("\t\t\t%c = %d",c,c);
    }
    printf ("\n\n");
    return 0;
}
