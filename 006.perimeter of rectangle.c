# include <stdio.h>
# include <conio.h>
int main()
{
    float length, wide, perimeter;
    printf ("enter the length of perimeter");
    scanf ("%f",&length);
    printf ("enter the wide of perimeter");
    scanf ("%f",&wide);
    perimeter= 2*(length+wide);
    printf ("perimeter of rectangle:%0.2f",perimeter);
    return 0;
}
