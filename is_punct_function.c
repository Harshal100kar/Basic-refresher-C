/*Description : Program to implement ispunct() function
Sample input :Entering the character
              Enter the character: a
Sample output :printing it is punctuation or not
               Entered character is not punctuation character
*/
#include <stdio.h>

int my_ispunct(char ch)                                                         //calling the function
{
	if ( (ch >= 33 && ch <= 47) || (ch >=58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126) ) //checking the condition for all punctuational character
			return 1;                                                           //if anyone condition is true return 1
	else                                                                        //if condition fails
		return 0;                                                               //return 0
}
int main()
{
	char ch; int result;                                                        //declaring variables
	
	printf("Enter the character: ");                                            //printing prompt message to user
	scanf("%c", &ch);                                                           //reading input from user
	
	result = my_ispunct(ch);                                                    //calling the function
	
	if ( result )                                                               //checking if result got 1 then 
		printf("Entered character is punctuation character\n");                 //printing entered character is punctuation character
	else                                                                        //if result got 0
		printf("Entered character is not punctuation character\n");             //printing entered character is not punctuation character
    return 0;
}
