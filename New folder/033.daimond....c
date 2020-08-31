#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the value of n for illustrate a daimond : ");
    scanf("%d", &n);
    printf ("\n\t\t\t_________________________");
    printf ("\n\t\t\t| The Daimond is bellow |");
    printf ("\n\t\t\t|           V           |");
    printf ("\n\t\t\t|           V           |");
    printf ("\n\t\t\t|___________V___________|");
    printf ("\n\n\n\n");
    for(i=1; i<=n; i++)
    {
        printf("\t\t\t");
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        printf("\t\t\t");
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=2; j<(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf ("\n\t\t\t  ______________________");
    printf ("\n\t\t\t  | Figure : A DAIMOND |");
    printf ("\n\t\t\t  |____________________|");
    printf ("\n\n\n\n");
    return 0;
}
