#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    if(b>c&&d>a&&(c+d)>(a+b))
        printf("Valores aceitos");
    else
        printf("Valores nao aceitos");
    printf("\n");
}
