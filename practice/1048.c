#include<stdio.h>
main()
{
    float a,b,c;
    scanf("%f",&a);
    if (a>=0&&a<=400.00)
    {
        b= (a*15)/100;
        c=a+b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %\n",c,b);
    }


    else if (a>=400.01 &&a<=800.00)
    {
        b= (a*12)/100;
        c=a+b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %\n",c,b);
    }


    else if (a>=800.01 &&a<=1200.00)
    {
        b= (a*10)/100;
        c=a+b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %\n",c,b);
    }


    else if (a>=1200.01 &&a<=2000.00)
    {
        b= (a*7)/100;
        c=a+b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %\n",c,b);
    }

    else if (a>2000.00)
    {
        b= (a*4)/100;
        c=a+b;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %\n",c,b);
    }

    return 0;
}
