#include<stdio.h>
int main(void)
{
    float a,b,c,d,e,m,f;
    scanf ("%f%f%f%f",&a,&b,&c,&d);

    m = (a * 2 + b * 3 + c * 4 + d) / 10;

    if (m>=5.0&&m<=6.9)
        scanf("%f",&e);

    printf("Media: %.1f\n", m);

    if (m >= 7.0)
        printf("Aluno aprovado.\n");

    else if (m<5.0)
        printf("Aluno reprovado.\n");

    else
    {
        printf("Aluno em exame.\n");
        printf ("Nota do exame: %.1f\n",e);
        f = (m+e)/2.0;
        if (f>=5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %0.1f\n",f);
    }
    return 0;
}
