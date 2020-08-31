#include<stdio.h>
int main(void)
{
    float a[7],g=0;
    int i, c = 0;

    for (i=0;i<6;i++)
        scanf("%f",&a[i]);

    for (i=0;i<6;i++)
        if(a[i]>0)
        {
            g += a[i];
            c++;
        }

    printf("%d valores positivos\n%.1f\n",c,g/c);

    return 0;
}
