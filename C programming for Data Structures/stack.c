#include <stdio.h>

main()
{
    int i,n,l=-1,e,f;
    int a[30];
    printf ("Please enter the value of memory cell : \n");
    scanf ("%d",&e);
    printf ("To push value press 1");
    printf ("\nTo pop value press 2");
    printf ("\nTo stuck value press 3\n");

   while (scanf ("%d",&n))
    {
        if (n==1)
        {
            if (l>(e-2))
                printf ("This is overflow.\n");
            else
            {
                printf ("enter value : ");
                scanf ("%d",&a[++l]);
            }
        }

        if (n==2)
        {
            if (l<0)
                printf("This is underflow.\n");
            else
                printf ("%d poped\n",a[l--]);
        }

        if (n==3)
        {
            if (l<0)
            {
                printf ("empty ");
            }
            printf("stack ");
            for (i=0;i<=l;i++)
            {
                printf ("%d, ",a[i]);
            }
            printf ("\n");
        }
        printf ("\nTo push value press 1");
        printf ("\nTo pop value press 2");
        printf ("\nTo stuck value press 3\n");
    }

}

