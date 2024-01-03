/* 
	C program to count the number of bits/how many ones SET bits are there in given number
Enter the number:15
The number of SET bits are 4
	*/
#include<stdio.h>
int main()
{
	int count,num;

	printf("Enter the number:");
	scanf("%d",&num);

	for(count=0; num!=0; num >>=1)
	{
		if(num & 01)
		{
			count++;
		}
	}
	printf("The number of SET bits are %d\n",count);
	return 0;
}
