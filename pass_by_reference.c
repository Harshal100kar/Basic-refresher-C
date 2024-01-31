//C program to do sum using pass by reference method

#include<stdio.h>

int add(int *a, int *b);
int main()
{
	int a=10,b=20;

	add(&a,&b);

	printf("The Sum is %d\n",a);
	return 0;


}

int add(int *a, int *b)
{
	*a = *a + *b;
}
