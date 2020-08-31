#include<stdio.h>
int main()
{
    int M,N,J,A=0,i;
    while(1)
    {
        scanf("%d %d",&M,&N);

        if(M  <=0 || N<=0)
            break;

        else
        {
            if((M<=N))
            {
                for(J=M;J<=N;J++)
                {
                    printf("%d ",J);
                    A=A+J;
                }
                printf("Sum=%d\n",A);
                A=0;
            }
            else
            {
                for(J=N;J<=M;J++)
                {
                    printf("%d ",J);
                    A=A+J;
                }
                printf("Sum=%d\n",A);
                A=0;
            }
        }
    }
    return 0;
}
