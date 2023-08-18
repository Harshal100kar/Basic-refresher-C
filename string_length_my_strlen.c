/* C program to find the length of the string using my_strlen function
Enter the String:harshal is good boy
The String length is:19
*/

#include<stdio.h>

int my_strlen(char *str);
int main()
{
	int length;     //declaring variable
	char str[100];  //declaring an array of size 100

	printf("Enter the String:");  //prompt the message to user
	fgets(str,sizeof(str),stdin); //getting input from user

	length = my_strlen(str);      //calling the function and storing the return value in length variable

	printf("The String length is: %d\n",length); //printing the length of string

	return 0;


}
int my_strlen(char *str)        //function definition
{
	int length = 0;
	while(*str != '\0' && *str != '\n') //fgets function include newline charcater '\n' which should not be included in string length
	{
		length++;
		str++;
	}
	return length; //returning lengt
	
}
