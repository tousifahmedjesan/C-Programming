
#include <stdio.h>
int main (void)
{
    float A, B, C, area, perimeter ;

    scanf("%f%f%f",&A,&B,&C);

    if ((A < (B+C)) && (B < (A+C)) && (C < (B+A)))
    {
        perimeter = A + B + C;
        printf("Perimetro = %.1f\n",perimeter);


    }
    else
    {
        area = ((A + B) * C) / 2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
