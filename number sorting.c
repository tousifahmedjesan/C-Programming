#include<stdio.h>
int main()
{
    int ara[100], i, j, temp, a, b;
    printf("Enter 1 for ascending or enter 2 for Descending: ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter the number of item: ");
        scanf("%d",&b);
        printf("\nEnter the elements: ");
        for(i=0; i<b; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(i=0; i<b; i++)
        {
            for(j=i+1; j<b; j++)
            {
                if(ara[i]>ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
        printf("\nAscending order: ");
        for(i=0; i<b; i++)
        {
            printf("%d, \n", ara[i]);
        }
    }

    else if(a==2){
        printf("Enter the number of item: ");
        scanf("%d",&b);
        printf("\nEnter the elements: ");
        for(i=0; i<b; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(i=0; i<b; i++)
        {
            for(j=i+1; j<b; j++)
            {
                if(ara[i]<ara[j])
                {
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }
        }
         printf("\nDescending order: ");
        for(i=0; i<b; i++)
        {
            printf("%d, \n", ara[i]);
        }
    }
    else{
        printf("\nwrong input.\n");
    }

    return 0;
}
