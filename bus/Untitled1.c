#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,age[100],route;
	double amt[100],sum=0,sum2=0;
	printf("\n\t----------------------------------------------------------------------------------\n");
	printf("\t    W E L C O M E    T O    B U S    T I C K E T    B OO K I N G    S Y S T E M\n");
	printf("\t----------------------------------------------------------------------------------\n");
	printf ("please select your Route of bus\n1.Danmondi \n2.Gulshan\n3.Sahabag\n");
	printf("\t\t--------\n");
	printf("\t\t    ");
	scanf("%d",&route);
    printf("\t\t--------\n");

	if(route==1){
        printf("\n Enter the number of traveler: ");
	scanf("%d",&a);
	printf("Enter the Age of Your %d Members:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("\n=====================================\n");
	printf("\nThe rates of Tickets.\n");
	for(i=0;i<a;i++)
	{
		if(age[i]>=10 && age[i]<15)
		{
		printf("\n\n10-15(age) wins 10 percent discount.");
		amt[i]=30-(100*10/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>=15 && age[i]<=20)
		{
		printf("\n\n15-20(age) wins 5 percent discount.");
		amt[i]=30-(100*5/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>20)
		{
		printf("\n\nAbove 20 years old member Rates is fix.");
		amt[i]=30;
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else
		{
		printf("\n\n%d years are not allowed because Below 10 Children are not allowed to sit on discovery\n",age[i]);
		amt[i]=0;
		}
		sum+=amt[i];
	}
	}


	if(route==2){
        printf("\n How many Members in your family?\n");
	scanf("%d",&a);
	printf("Enter the Age of Your %d Family Members:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("\n=====================================\n");
	printf("\nThe rates of Tickets.\n");
	for(i=0;i<a;i++)
	{
		if(age[i]>=10 && age[i]<15)
		{
		printf("\n\n10-15(age) wins 10 percent discount.");
		amt[i]=50-(100*10/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>=15 && age[i]<=20)
		{
		printf("\n\n15-20(age) wins 5 percent discount.");
		amt[i]=50-(100*5/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>20)
		{
		printf("\n\nAbove 20 years old member Rates is fix.");
		amt[i]=50;
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else
		{
		printf("\n\n%d years are not allowed because Below 10 Children are not allowed to sit on discovery\n",age[i]);
		amt[i]=0;
		}
		sum+=amt[i];
	}
	}

	if(route==3){
        printf("\n How many Members in your family?\n");
	scanf("%d",&a);
	printf("Enter the Age of Your %d Family Members:\n",a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("\n=====================================\n");
	printf("\nThe rates of Tickets.\n");
	for(i=0;i<a;i++)
	{
		if(age[i]>=10 && age[i]<15)
		{
		printf("\n\n10-15(age) wins 10 percent discount.");
		amt[i]=70-(100*10/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>=15 && age[i]<=20)
		{
		printf("\n\n15-20(age) wins 5 percent discount.");
		amt[i]=70-(100*5/100);
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else if(age[i]>20)
		{
		printf("\n\nAbove 20 years old member Rates is fix.");
		amt[i]=70;
		printf("\nRates for discovery for %d years member is: %.2lf Taka",age[i],amt[i]);
		}
		else
		{
		printf("\n\n%d years are not allowed because Below 10 Children are not allowed to sit on discovery\n",age[i]);
		amt[i]=0;
		}
		sum+=amt[i];
	}
	}
	printf("\n\n=====================================\n");
	printf("\nTotal Price of Ticket is: %.2lf",sum);
	printf("\n\n=====================================\n");

	getch();
}
