#include<stdio.h>
struct employee

{
	char name[20];
	char address[20];
	int age;
}e[5];

int main()
{
	int i;
	
	for(i=0; i<5; i++)
	
	{
	
	printf("enter the name of employee:");
	scanf("%s",& e[i].name);
	
	printf("enter the address of employee:");
	scanf("%s",& e[i].address);
	
	printf("enter the age of employee:");
	scanf("%d",& e[i].age);
	}
	
	printf("information of employee:");
	
	for(i=0; i<=5; i++)
	{
	
	
	printf("\n name of employee:%s", e[i].name);
	printf("\n address of employee:%s", e[i].address);
	printf("\n age of employee:%d", e[i].age);
	}

}
