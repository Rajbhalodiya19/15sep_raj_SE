#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number to generate table in c:");
	scanf("%d",&num);
	
	printf("\n table of %d",num);
	
	for(i=1; i<=10; i++)
	{
		printf("\n%d*%d=%d",num,i,(num*i));
	}
	
}
