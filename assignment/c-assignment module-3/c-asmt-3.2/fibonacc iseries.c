#include<stdio.h>
int main()
{
	int x,y;
	// T1=term 1,T2=term 2
	int T1=0,T2=1;
	// next term=T3,T3 is total of T1 and T2
	int T3=T1+T2;
	printf("enter the number of terms:");
	scanf("%d",&x);
	
	printf("fibonacci series is:");
	
	for(y=1; y<=x; y++)
	{
		printf("%d\n",T3);
		T1=T2;
		T2=T3;
		T3=T1+T2;
	 } 
	 return 0;
}
