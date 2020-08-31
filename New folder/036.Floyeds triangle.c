#include <stdio.h>
int main()
{
    int n, i, j, k=1;
    printf("\nPlease enter a value of n for illustrate a Floyeds triangle : ");
    scanf ("%d",&n);
    printf ("\n\t\t\t_________________________________");
    printf ("\n\t\t\t| The Floyeds triangle is bellow|");
    printf ("\n\t\t\t|               V               |");
    printf ("\n\t\t\t|               V               |");
    printf ("\n\t\t\t|_______________V_______________|");
    printf ("\n\n\n\n");
    for (i=1; i<=n; i++)
    {
        printf ("\t\t\t\t");
        for (j=1; j<=i; j++)
        {
            printf ("%d ",k);
            k++;
        }
        printf ("\n");
    }
    printf ("\n\t\t\t  _______________________________");
    printf ("\n\t\t\t  | Figure : A FLOYEDS TRIANGLE |");
    printf ("\n\t\t\t  |_____________________________|");
    printf ("\n\n\n\n");
    return 0;
}
