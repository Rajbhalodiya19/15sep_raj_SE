#include<stdio.h>
int main()
{
	int a;
	printf("enter even nos between 1 to 100:\n");
	
	
	for( a=1 ; a<=100; a++)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
	}
	return 0;
}
