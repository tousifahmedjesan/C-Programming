#include <stdio.h>
int main(void)
{
    int a,b;
    float s;
    scanf ("%d%d",&a,&b);
    if(a==1)
        s= 4.00*b;
    else if(a==2)
        s= 4.50*b;
    else if(a==3)
        s= 5.00*b;
    else if(a==4)
        s= 2.00*b;
    else
        s= 1.50*b;
    printf("Total: R$ %.2f\n",s);
}

