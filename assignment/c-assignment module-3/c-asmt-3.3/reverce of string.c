#include<stdio.h>
int main()

// C program to reverse a string using recursion
# include <stdio.h>

/* Function to print reverse of the passed string */
void reverse(char *str)
{
if (*str)
    {
	reverse(str+1);
	printf("%c", *str);
    }
}

/* Driver program to test above function */
int main()
{
char a[] = "ayidolahb jar";
reverse(a);
return 0;
}

