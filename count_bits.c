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
