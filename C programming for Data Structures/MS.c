#include <stdio.h>
int main()
{
    int a[50]={11,9,34,52,0,87,12,10},b[50], c[50],d[50],e[50],f[50],g[50];
    int m[50],n[50],o[50],p[50],w[50],x[50],y[50],z[50], i, j, k, t;

    printf ("\nBefore marge sort : ");
    for(i=0;i<8;i++)
        printf ("%d, ",a[i]);

    for (i=0,j=4;i<4,j<8;i++,j++)
    {
        b[i] = a[i];
        c[i] = a[j];
    }

    for (i=0,j=2;i<2,j<4;i++,j++)
    {
        d[i] = b[i];
        e[i] = b[j];
        f[i] = c[i];
        g[i] = c[j];
    }

     for (i=0,j=1;i<1,j<2;i++,j++)
    {
        m[i] = d[i];
        n[i] = d[j];
        o[i] = e[i];
        p[i] = e[j];

        w[i] = f[i];
        x[i] = f[j];
        y[i] = g[i];
        z[i] = g[j];
    }

    for (i=0,j=1; i<1; i++)
    {
        if (m[i]<n[i])
        {
            d[i]=m[i];
            d[j]=n[i];
        }
        else
        {
            d[i]=n[i];
            d[j]=m[i];
        }
        if (o[i]<p[i])
        {
            e[i]=o[i];
            e[j]=p[i];
        }
        else
        {
            e[i]=p[i];
            e[j]=o[i];
        }
        if (w[i]<x[i])
        {
            f[i]=w[i];
            f[j]=x[i];
        }
        else
        {
            f[i]=x[i];
            f[j]=w[i];
        }
        if (y[i]<z[i])
        {
            g[i]=y[i];
            g[j]=z[i];
        }
        else
        {
            g[i]=z[i];
            g[j]=y[i];
        }
    }

    for (i=0,j=2;i<2;i++,j++)
    {
        b[i]=d[i];
        b[j]=e[i];
        c[i]=f[i];
        c[j]=g[i];
    }

    for (i=0;i<3;i++)
    {
        for (j=i+1;j<4;j++)
        {
            if (b[i]>b[j])
            {
                t=b[j];
                b[j]=b[i];
                b[i]=t;
            }
            if (c[i]>c[j])
            {
                t=c[j];
                c[j]=c[i];
                c[i]=t;
            }
        }
    }

    for (i=0,j=4;i<4;i++,j++)
    {
        a[i]=b[i];
        a[j]=c[i];
    }

    for (i=0;i<7;i++)
    {
        for (j=i+1;j<8;j++)
        {
            if (a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }

    printf ("\n\nAfter marge sort : ");
    for(i=0;i<8;i++)
        printf ("%d, ",a[i]);
    printf ("\n");

}
