#include <stdio.h>
#include <math.h>

int main (void)
{
    float a,b,c,d,r1,r2;
    scanf ("%f%f%f",&a,&b,&c);

    d = ((b*b)-(4*a*c));
    r1 = (-b+sqrt(d))/(2*a);
    r2 = (-b-sqrt(d))/(2*a);

    if(a!=0 && d>0)
        printf ("R1 = %.5f\nR2 = %.5f\n",r1,r2);

    else
        printf ("Impossivel calcular\n");

    return 0;
}
