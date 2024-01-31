//C program to do sum with using pass by value method

#include<stdio.h>

int add(int a, int b);
int main()
{
	int a=10,b=20,sum;
	
	sum = add(a,b); // calling the function add using pass by value method

	printf("The sum is %d\n",sum);
	return 0;

}

int add(int a, int b)
{
	int result;

	result = a + b;

	return result;
}
