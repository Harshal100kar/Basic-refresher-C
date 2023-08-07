#include<stdio.h>

int swap(int *a, int *b);

int main()
{
	int a=10,b=20;

	printf("BEFORE SWAPPING: a=%d,b=%d\n",a,b);
	swap(&a,&b);

	printf("AFTER SWAPPING: a=%d,b=%d\n",a,b);
	return 0;
}

int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
