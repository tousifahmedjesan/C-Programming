#include <stdio.h>
main()
{
    int i=0,n,d=0,e,f;
    char a[30],b[30],c[30];
    printf ("\nTo push value press 1");
    printf ("\nTo pop value press 2");
    printf ("\nTo stuck value press 3\n");

    while (scanf ("%d",&n))
    {
    if (n==1)
    {
        {
            printf ("enter value : ");
            scanf ("%d",&a[++i]);
        }
    }
	else if (n==2)
    {
    	if (i<0)
    	{
    		printf ("this is underflow.");
		}
		//a[i--];
        printf ("%d poped",a[i--]);
    }


    else if (n==3)
    {
    	if (i<0)
        {
            printf ("empty ");
        }
        printf ("stack");
    	for (f=0;f<i;f++)
        {
        	printf (" %d, ",a[f]);
		}
    }
    }

}

