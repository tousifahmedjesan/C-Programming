#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c,d,root1,root2;
    d = b*b-4*a*c;
    printf("Please enter a \n");
    scanf("%if",&a);
    printf("Please enter b \n");
    scanf("%if",&b);
    printf("Please enter c \n");
    scanf("%if",&c);
    if (d>0)
    {
        root1=(-b+sqrt(b*b-4.*a*c))/(2.*a);
        root2=(-b-sqrt(b*b-4.*a*c))/(2.*a);
        printf("\n First root is %if",root1);
        printf("\n Second root is %if",root2);
    }
    else
    {
        printf("\n Discriminant is negative! No roots!");
    }
    printf("\n");
    return 0;
}
