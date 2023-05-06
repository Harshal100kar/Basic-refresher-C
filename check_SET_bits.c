//Program to count number of bits/SET bits are there in given number
#include<stdio.h>

int main()
{
    int num,count=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(count=0; num!=0; num >>=1)
    {
	if(num & 01)
	{
	    count++;
	}
    }
    printf("THE NUMBER OF SET BITS ARE:%d\n",count);
    return 0;

}
