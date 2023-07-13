/* Program tp count the number of zeros in a number
 * num =10 -> 1010
 * so no of zeros are 2
 *
 * Enter the number:10
   number of zeros are:2

  */

#include<stdio.h>

int main()
{
	int num,count;

	printf("Enter the number:");
	scanf("%d",&num);

	for(count=0;num!=0;num>>=1)
	{
		if((num & 01) ==0 )
		{
			count++;
		}
	}
	printf("The number of zeros are:%d\n",count);

	return 0;
		
}
