#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number:");
	scanf("%d",&num);

	if(num & 01)
	{
		printf("The entered number is an ODD number\n");
	}
	else
	{
		printf("The entered number is an EVEN number\n");
	}
	
	return 0;
}
