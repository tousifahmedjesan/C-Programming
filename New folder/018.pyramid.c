#include <stdio.h>
int main ()
{
    int n,i,j;

    printf("\n\nPlease enter a value of n for illustrate a pyramid : ");
    scanf ("%d",&n);

    printf ("\n\t\t\t_________________________");
    printf ("\n\t\t\t| The pyramid is bellow |");
    printf ("\n\t\t\t|           V           |");
    printf ("\n\t\t\t|           V           |");
    printf ("\n\t\t\t|___________V___________|");
    printf ("\n\n\n\n");

    for (i=n;i>=1;i--)
    {
        printf ("\t\t\t\t");
        for (j=1;j<=i;j++)
        {
            printf ("*");
        }
        printf ("\n");
    }

    printf ("\n\t\t\t  ______________________");
    printf ("\n\t\t\t  | Figure : A PYRAMID |");
    printf ("\n\t\t\t  |____________________|");
    printf ("\n\n\n\n");

    return 0;
}
