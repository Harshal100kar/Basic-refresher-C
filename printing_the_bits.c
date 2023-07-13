/*Program to print the bits
output: Enter the number:10
00000000 00000000 00000000 00001010
*/

#include<stdio.h>

int main()
{
	int i,num;

	printf("Enter the number:");
	scanf("%d",&num);

	for(i=0;i<32;i++)
	{
		if(i%8 == 0)
			printf(" ");

		//1st method

	/*	if(num &(1<<(31-i)))
		{
			printf("1");
		}
		else
		{
			printf("0");
		} */


		//2nd method
		
		printf("%d",(num>>(31-i) & 0x01));
	}
	printf("\n");
	return 0;
}
