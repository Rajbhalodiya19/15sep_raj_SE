#include <stdio.h>
#include <string.h>
  
int main()
{
   char inputArray[100], reversedArray[100];
 
   printf("\nEnter the string for palindrome check ");
   scanf("%s", inputArray);
   /* Copy input string and reverse it*/
   strcpy(reversedArray, inputArray);
   /* reverse string */
   strrev(reversedArray);
   /* Compare reversed string with inpit string */
   if(strcmp(inputArray, reversedArray) == 0 )
      printf("\n%s is a palindrome.", inputArray);
   else
      printf("\n%s is not a palindrome.", inputArray);
       
   getch();
   return 0;
}
