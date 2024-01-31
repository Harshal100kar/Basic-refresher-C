/*Description : program to implement isalnum()function
Sample input : Enter the character: a
Sample output : The character 'a' is an alnum character.
*/
#include <stdio.h>

int my_isalnum(int ch)                                                        //calling the function 
{
	if ( (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) ) //firstly checking whether character entered is numeric(0-9), then uppercase alphabets(A-Z) and then lowercase alphabets(a-z)
	return 1;                                                                          //if any one condition is true return 1
	else                                                                               //if condition fails
		return 0;                                                                      //return 0
}
int main()
{
	char ch; int result;                                                      //declaring a variables
	printf("Enter the character: ");                                          //printing prompt message to user
	scanf("%c", &ch);                                                         //reading input from user
	
	result = my_isalnum(ch);                                                  //calling the function
	if ( result )                                                             //checking if result got 1 
		printf("Entered character is alphanumeric character\n");            //printing alnum character
	else                                                                      //if result got 0
		printf("Entered character is not alphanumeric character\n");        //printing is not alnum character
    return 0;
}	
