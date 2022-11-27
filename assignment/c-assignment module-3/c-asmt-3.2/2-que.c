#include<stdio.h>
void main()
{
	// a=10 b=20
	// a=20 b=10
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);
}
