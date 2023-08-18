/* C program to print string using my_puts function
 
puts():this function is used to write a line or string to stdout 
putchar(): this function is used to write single character to stdout
*/

#include<stdio.h>

void my_puts(char *str); //function prototype
int main()
{
	char str[100];  //declaring the char array of size 100

	printf("Enter your String:"); //prompting message to user
	fgets(str,sizeof(str),stdin); //getting input from user

	my_puts(str);   //calling the function
	return 0;
}
void my_puts(char *str) //function definitation
{
	printf("Your String is: ");

	while(*str)  //this loop will run until the null character
	{
		putchar(*str++); //this will print the string

	}

}
