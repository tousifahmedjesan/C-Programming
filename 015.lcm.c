#include <stdio.h>
int main ()
{
	int n1,n2,minMultiple;
	scanf ("%d %d",&n1,&n2);
	minMultiple = (n1>n2) ? n1 : n2 ;
	while (1)
	{
		if (minMultiple%n1==0 && minMultiple%n2==0)
		{
			printf ("the lmc of %d and %d is %d",n1,n2,minMultiple);
			break;
		}
		minMultiple++;
	}
	return 0 ;
}
