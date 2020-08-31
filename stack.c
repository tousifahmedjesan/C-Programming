#include <stdio.h>

main()
{
    int i,n,l=-1,e,f;
    int a[30];
    //start:
    printf ("To push value press 1");
    printf ("\nTo pop value press 2");
    printf ("\nTo stuck value press 3\n");

   while (scanf ("%d",&n))
    {
        if (n==1)
        {
            printf ("enter value : ");
            scanf ("%d",&a[++l]);
        }


        if (n==2)
        {
            if (l<0)
                printf("empty");
            else
                printf ("%d poped",a[l--]);


        }

        if (n==3)
        {
            if (l<0)
            {
                printf ("stuck : empty");
            }
            printf("stack: ");
            for (i=0;i<=l;i++)
            {
                    printf ("%d, ",a[i]);
            }
        }
        //goto start;
    }

}

