#include<stdio.h>
int main()
{
    int a=1,b=1,x=0,n;
    scanf("%d",&n);
    while(x<=n)
    {
        printf("%d\t",x);
        a=b;
        b=x;
        x=a+b;
    }
    return 0;
}
