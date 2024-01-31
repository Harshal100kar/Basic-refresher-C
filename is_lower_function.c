/*Description : Program to implement islower() function
Sample input : Enter the character: a
Sample output : Entered character is lower case alphabet
*/
#include <stdio.h>

int my_islower(int ch)                                                        //Function definition 
{
	if ( ch >= 97 && ch <= 122 )                                              //checking ascii value of lower case characters range from 97 to 122.
	   return 1;                                                              //if both condition true return 1
    else
	    return 0;                                                             //if one condition fails return 0
}	
int main()
{
	char ch; int result;                                                      //declaring variables
	
	printf("Enter the character: ");                                          //printing prompt message to user
	scanf("%c", &ch);                                                         //reading input from user
	
    result = my_islower(ch);                                                  //calling the function
    
	if ( result )                                                             //checking result got 1 or 0
		printf("Entered character is lower case alphabet\n");                 // if result got 1 printing lower case alphabet
	else
		printf("Entered character is not lower case alphabet\n");             //if result got 0 printing not lower case alphabet
	return 0;
}



