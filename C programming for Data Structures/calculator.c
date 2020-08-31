#include <stdio.h>
#include <conio.h>
int main ()
{
    float j,k;
    char i;
    int l,m,n,f=1;
    printf("\npress =>\na for factorial\t\tb for seling\t\tc for floring\nd for Divided\t\te for modulo\t\tf for absulate value\ng for int\th for float\t x for exit\n");
    y:
    scanf("%c",&i);
    switch (i)
    {
        case 'a':
        {
            printf("Enter an integer: ");
            scanf("%d",&n);
            if (n < 0)
                printf("Error! Factorial of a negative number doesn't exist.");
            else
            {
                for(i=1; i<=n; ++i)
                    f*=i;
                printf("Factorial of %d = %d", n, f);
            }
            break;
        }
        case 'b':
        {
            printf("Enter a value: ");
            scanf("%d",&n);
            printf ("seling = %d\n",n+1);
            break;
        }
        case 'c':
        {
            printf("Enter a value: ");
            scanf("%d",&n);
            printf ("floring = %d\n",n);
            break;
        }
        case 'd':
        {
            printf("Enter two values: ");
            scanf("%d%d",&m,&n);
            printf ("m/n=%d\n",m/n);
            break;
        }
        case 'e':
        {
            printf("Enter two values: ");
            scanf("%d%d",&m,&n);
            printf ("m mod n=%d\n",m%n);
            break;
        }
        case 'f':
        {
            printf("Enter a value: ");
            scanf("%d",&n);
            printf ("|n|=%d\n",abs(n));
            break;
        }
        case 'g':
        {
            printf("Enter a value: ");
            scanf("%f",&j);
            n=j;
            printf ("int value of n = %d\n",n);
            break;
        }
        case 'h':
        {
            printf("Enter a value: ");
            scanf("%f",&j);
            printf ("float value of n = %.2f\n",j);
            break;
        }
        case 'x':
            goto end;
        default:
            printf ("Error, you press wrong key , try again\n");
    }
    goto y;
    end:
    return 0;
}
