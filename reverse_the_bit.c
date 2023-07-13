/* Program to reverse the bits
Output:
Enter the no:10
00000000 00000000 00000000 00001010
 01010000 00000000 00000000 00000000
*/

#include<stdio.h>

int main()
{
	int num,i,rnum=0;

	printf("Enter the number:");
	scanf("%d",&num);

	for(i=0;i<32;i++)
	{
		if(i%8 == 0)
			printf(" ");

		printf("%d",num>>(31-i) & 0x01);
	}
	printf("\n");

	for(i=0;i<32;i++)
	{
		if(num & (1<<i))
			rnum = rnum | (1<<(31-i));

	}

	for(i=0;i<32;i++)
	{
		if(i%8 == 0)
			printf(" ");

		printf("%d",rnum>>(31-i) & 0x01);
	}
	printf("\n");

	return 0;

}
