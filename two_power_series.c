//Program to Check the number belongs to 2 power series or not

#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number:");
	scanf("%d",&num);

	if(num &(num-1))
	{
		printf("The entred number %d is NOT a two power series number\n",num);
	}
	else
	{
		printf("The entred number %d is a two power series number\n",num);
	}
	return 0;
}
