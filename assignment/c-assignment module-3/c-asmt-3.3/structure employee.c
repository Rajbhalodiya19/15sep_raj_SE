#include<stdio.h>
struct employee

{
	char name[20],address[20];
	 
	int  age;
}e;

int main()
{
	printf("enter the name of employee:");
	scanf("%s", & e.name);
	
	printf("enter the address of employee:");
	scanf("%s", & e.address);
	
	printf("enter the age of employee:");
	scanf("%s", & e.age);
	
	printf("\n name of employee:%s", e.name);
	printf("\n address of employee:%s", e.address);
	printf("\n age of employee:%s", e.age);
	
}
