#include<stdio.h>
int main()
{
	int a,b,rectangle,radious;
	float triangle,circle;
	
	printf("enter the length:");
	scanf("%d",&a);
	printf("enter the width:");
	scanf("%d",&b);
	
	rectangle=a*b;
	triangle=(a*b)*1/2;
	printf("\narea of rectangle is:%d",rectangle);
	printf("\narea of triangle is:%f",triangle);
	printf("\n enter the radious:");
	scanf("%f",&radious);
	circle=3.14*radious*radious;
	printf("\narea of circle is:%f",circle);
}
