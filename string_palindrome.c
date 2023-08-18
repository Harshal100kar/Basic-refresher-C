/* C program to check the given string is plaindrome or not
   
Palindrome:if we read from start or from end it reamins same
ex:nom,madam,mom,malayalam
   Enter the string:MADAM
The given string MADAM is a palindrome
*/

#include<stdio.h>

int is_palindrome(char *str);
int main()
{
	char str[100];  //declaring the array of size 100

	printf("Enter the String:");  //prompt the message to user
	fgets(str,sizeof(str),stdin); //getting input from user

	if(is_palindrome(str))        //calling the function and checking the if condition
	{
		printf("The entered string %s IS A PALINDROME\n",str); //printing the message
	}
	else
	{
		printf("The entered string %s is NOT a PLAINDROME\n",str); //printing the message
	}
	return 0;
}
int is_palindrome(char *str)  //function definition
{
	int length=0,i=0,j;  //variable declaration

	while(str[length] != '\0' && str[length] != '\n')  //finding the length of string

	{
		length++;
	}

	j=length-1;  //index for the last char

	while(i<j)   
	{
		if(str[i] != str[j])   //if condition fails
		{
			return 0;      //not a palindrome
		}
		i++;     //incrementing i
		j--;     //decrementing j
	}
	return 1;        //is a palindrome
}

