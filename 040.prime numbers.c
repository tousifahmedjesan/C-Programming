#include<stdio.h>
#include<conio.h>

int main()
{

    int N, i, j, p,a,b=0,c;

    printf("\n**** To print all prime numbers between 1 to N ****\n");

    printf("\nEnter the value of N : ");
    scanf("%d",&N);

    printf("\nPrime numbers between %d to %d : \n", 1, N);

    for(i = 2; i <= N; i++)
    {
        p = 0;
        for(j = 2; j <= i/2; j++)
        {
             if(i % j == 0)
             {
                 p = 1;
                 break;
             }
        }
        c = i;
        if(p==0)
        {

                printf("%d, ",c);

        }
    }
    printf("\n");
   return 0;
}
