#include <stdio.h>
#include <string.h>
int main()
{
    int a[500],b[500];
    char c[500],d[500];
    printf("*Enter a number string to check if it is palindrome : ");
    gets (a);
    strcpy (b,a);
    strrev (b);
    if (strcmp (a,b) == 0)
    {
        printf("\n'%s' string is a palindrome.\n",a);
    }
    else
    {
        printf("\n'%s' string is not a palindrome.\n",a);
    }
    printf("\n*Enter a character string to check if it is palindrome : ");
    gets (c);
    strcpy (d,c);
    strrev (d);
    if (strcmp (c,d) == 0)
    {
        printf("\n'%s' string is a palindrome.\n",c);
    }
    else
    {
        printf("\n'%s' string is not a palindrome.\n",c);
    }
    return 0;
}

