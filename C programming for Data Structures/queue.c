//Queue program:
#include <stdio.h>
int main()

{
    int i,n,e,l=0,f=0,u=0;
    int a[30];
    printf ("Please enter the value of memory cell : \n");
    scanf ("%d",&e);
    printf ("To push value press 1");
    printf ("\nTo pop value press 2");
    printf ("\nTo show queue value press 3\n");

   while (scanf ("%d",&n))
    {
        if (n==1)
        {
            if (f>=e)
                printf ("This is overflow.\n");
            else
            {
                printf ("enter value : ");
                scanf ("%d",&a[l++]);
                f++;
            }
        }

        if (n==2)
        {
            if (f<=0)
                printf("This is underflow.\n");
            else
            {
                printf ("%d poped\n",a[u++]);
                --f;
            }
        }

        if (n==3)
        {
            if (f<=0)
            {
                printf ("empty queue. ");
            }

            else
            {
                printf("queue ");
                for (i=u;i<l;i++)
                {
                    printf ("%d, ",a[i]);
                }
                printf ("\n front = %d, rare = %d\n",l,u+1);
            }
        }
    }
}


