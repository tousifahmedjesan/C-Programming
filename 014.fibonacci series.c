#include<stdio.h>
int main()
{

    int n,a=0,b=1,c,x;

    scanf("%d",&n);

    for (x=0; x<n; x++)
    {
        if (x<=1)
            c=x;

        else
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d\t",c);
    }
    return 0;

}
