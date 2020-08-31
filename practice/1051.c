#include<stdio.h>
main()
{
    float a,b,c;
    scanf("%f",&a);
    if (a>2000.00&&a<=3000.00)
    {
        a=a-2000.00;
        b= (a*8)/100;
        printf("R$ %.2f\n",b);
    }


    else if (a>3000.00 &&a<=4500.00)
    {
        a=a-3000.00;
        b= (a*18)/100;
        printf("R$ %.2f\n",b+80);
    }


    else if (a>4500.00)
    {
        a=a-4500.00;
        b= (a*28)/100;
        printf("R$ %.2f\n",b+350);
    }

    else
        printf("Isento\n");

    return 0;
}
