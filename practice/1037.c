#include<stdio.h>
int main(void)
{
    float a;
    scanf ("%f",&a);

    if(a<0||a>100.0)
        printf("Fora de intervalo\n");

    if(a>=0&&a<=25.0000)
        printf("Intervalo [0,25]\n");

   if(a>25.00001&&a<=50.0000000)
        printf("Intervalo (25,50]\n");

   if(a>50.00001&&a<=75.0000000)
        printf("Intervalo (50,75]\n");

   if(a>75.00001&&a<=100.0000000)
        printf("Intervalo (75,100]\n");

    return 0;
}
