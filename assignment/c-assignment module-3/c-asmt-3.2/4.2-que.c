#include<stdio.h>
int main()
{
	char c;
	printf("enter character to check vowel or consonent:");
	scanf("%c",&c);
	
	
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("\nvowel");
		break;
		
		default:
			printf("\nnot a vowel");	
	}
}
