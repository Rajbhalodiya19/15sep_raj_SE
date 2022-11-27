#include<stdio.h>
int main()
{
	int a,b;
	
	printf("enter odd numbers :");
	scanf("%d",&b);
	
	printf("all odd numbersfrom 1 to %d are:\n",b);
	
	for(a=1; a<=b; a++)
	{
		if(a%2!=0)
		{
			printf("%d\n",a);
		}
		
	}
	return 0;
}
