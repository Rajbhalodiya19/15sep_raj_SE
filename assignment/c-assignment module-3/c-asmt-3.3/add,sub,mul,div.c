#include<stdio.h>
void main()
{

	
	int a[5],b[5];
	int i,j,temp;
	printf("\nenter the number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++);
		{
		if(a[i]<a[j])
			
		
		
		  {
		  
		   temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
	      }
	    }
	}
}


	
	

