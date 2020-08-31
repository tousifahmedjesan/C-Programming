
#include <stdio.h>
int main(void)
{
    float s,t;
    scanf ("%f%f",&s,&t);
    if(s>0&&t>0)
        printf("Q1");
    else if (s<0&&t>0)
        printf("Q2");
    else if (s<0&&t<0)
        printf("Q3");
    else if (s>0&&t<0)
        printf("Q4");
    else if ((s<0||s>0)&&t==0)
        printf("Eixo X");
    else if (s==0 && (t<0||t>0))
        printf("Eixo Y");
    else
        printf("Origem");
    printf("\n");
}

