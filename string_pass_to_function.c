//C program to pass string to function

#include<stdio.h>

void print_name(char name[]);  //function prototype
int main()
{
	char name[30]; //char array of size 30

	printf("Enter the name:"); //prompting the message to user
	fgets(name,sizeof(name),stdin); //getting input from user using fgets
	print_name(name);  //calling the function;
	return 0;
}

void print_name(char name[])    //function definition
{
	printf("Your name is: %s",name); //printing the name
}
