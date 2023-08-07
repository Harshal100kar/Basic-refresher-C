//C program to swap two integers without temp variable and using XOR 

#include<stdio.h>

int swap(int *a , int *b);
int main()
{
	int a = 10, b = 20;

	printf("BEFORE SWAPPING: a=%d,b=%d\n",a,b);

	swap(&a,&b);

	printf("AFTER SWAPPING: a=%d,b=%d\n",a,b);

	return 0;
}
int swap(int *a , int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
