#include <stdio.h>
#include <conio.h>
int main ()
{
    int length, breadth, area;
    printf ("enter the length of rectangle");
    scanf ("%d",&length);
    printf ("enter the breadth of rectangle");
    scanf ("%d",&breadth);
    area = length*breadth;
    printf("area of rectangle : %d",area);
    return 0;
}
