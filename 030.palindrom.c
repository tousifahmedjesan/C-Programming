#include <stdio.h>
int main()
{
    int n, z, r, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    z = n;
    
    while( n!=0 )
    {
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
    }
	   
    if (z == rev)
	{
        printf("\n%d is a palindrome.",z);
    }
    else
    {
        printf("\n%d is not a palindrome.",z);
    }
    return 0;
}
