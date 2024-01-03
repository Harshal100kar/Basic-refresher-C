/* Program to reverse the number
 * OUTPUT: Enter the number:123
   The reversed number is:321
   */

#include<stdio.h>

int main()
{
	int num,rnum=0,i;

	printf("Enter the number:");
	scanf("%d",&num);

	while(num>0)
	{
		rnum = rnum*10 + num%10;
		num/=10;
	}
	printf("The reversed number is:%d\n",rnum);

	return 0;

}
