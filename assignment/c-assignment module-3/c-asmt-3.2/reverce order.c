#include<stdio.h>
int main()
{
	
   	int n,reverce,rem;
   	printf("enter any number:");
   	scanf("%d",&n);
   	
   	while(n!=0)
   	{
   		rem=n%10;
   		reverce=reverce*10+rem;
   		n=n/10;
   		
	   }
	   
	printf("reverce number is:%d",reverce);   
}
