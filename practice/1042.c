#include<stdio.h>
int main()
{
    int a,b,c,s,m,l;
    scanf ("%d%d%d",&a,&b,&c);

    if (a<b&&a<c)
    {
        s=a;

        if(b<c)
            m=b,l=c;

        else
            m=c,l=b;
    }

     else if (a>b&&b<c)
    {
        s=b;

        if(a<c)
            m=a,l=c;

        else
            m=c,l=a;
    }

    else
    {
        s=c;

        if(b<a)
            m=b,l=a;

        else
            m=a,l=b;
    }

    printf ("%d\n%d\n%d\n\n%d\n%d\n%d\n",s,m,l,a,b,c);
    return 0;
}
