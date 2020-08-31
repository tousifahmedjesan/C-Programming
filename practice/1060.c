#include<stdio.h>
main()
{
    int a[6],i,c=0;
    for (i=0;i<6;i++)
        scanf("%d",&a[i]);
    for (i=0;i<6;i++)
        if(a[i]>0)
            c++;
    printf("%d valores positivos\n",c);

    return 0;
}
