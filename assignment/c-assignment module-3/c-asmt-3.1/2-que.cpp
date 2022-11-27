#include<stdio.h>
int main()
{
	int a,b;
	float c,d;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("\naddition is:%d",a+b);
	printf("\nsubstraction:%d,a-b");
	printf("\nmultiplication:%d,a*b");
	
	printf("enter the value of c and d:");
	scanf("%f%f",&c,&d);
	printf("\ndivision is:%f",c/d);
	printf("\nmodulo is:%f",a%b);
}
