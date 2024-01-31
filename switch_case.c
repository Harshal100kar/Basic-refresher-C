//Program for simple switch case usage
#include<stdio.h>

int main()
{
	int num1,num2;
	char ch;

	printf("Enter the two numbers:");
	scanf("%d %d",&num1,&num2);

	getchar(); //To clear input buffer

	printf("CHOOSE THE OPERATOR: + - * /\nEnter the operator:");
	scanf("%c",&ch);

	switch(ch)
	{
		case '+':
			printf("The ADDITION of two number is:%d\n",num1+num2);
			break;

		case '-':
			printf("The SUBTRACTION of two number is:%d\n",num1-num2);
			break;
		case '*':
			printf("The MULTIPLICATION of two number is:%d\n",num1*num2);
			break;
		case '/':
			printf("The DIVISION of two number is:%d\n",num1/num2);
			break;
		default:
			printf("Invalid input\nPlease choose the given opeartors only\n");
			break;
	}
	return 0;



}
