/*Description : Program to implement isxdigit() function
Sample input : Enter the character:3
Sample output : Entered character is  an hexadecimal digit
*/
#include <stdio.h>

int is_xdigit(int ch)                                                          //function definition
{
	if ( (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 70) || (ch >= 97 && ch <= 102) ) //firstly checking whether character entered is numeric(0-9), then uppercase alphabets(A-F) and then for lowercase alphabets(a-f)
	return 1;                                                                  //if anyone condition is true return 1
	else                                                                       //if condition fails
		return 0;                                                              //return 0
}
int main()
{
	char ch; int result;                                                       //declaring the variales
	
	printf("Enter the character: ");                                           //printing the prompt message to user
	scanf("%c", &ch);                                                          //reading input from user
	
	result = is_xdigit(ch);                                                    //calling the function
	
	if ( result )                                                              //checking if result got 1 then 
		printf("Entered character is  an hexadecimal digit\n");                //printing entered character is hexadeciaml
	else                                                                       //if result got 0
		printf("Entered character is not an hexadecimal digit\n");             //printing entered character is not hexadeciaml
    return 0;
}	




