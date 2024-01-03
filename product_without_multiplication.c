/* Program to multiply to numbers (mXn) without multiplication operator
 * /
 */
#include<stdio.h>
int main()
{
	int i,num1,num2,prod=0;
	printf("Enter Number 1 and Number 2:");
	scanf("%d %d",&num1,&num2);

	for(i=0;i<num1;i++)
	{
		prod+=num2;

	}
	printf("%d*%d=%d\n",num1,num2,prod);
	return 0;
}
