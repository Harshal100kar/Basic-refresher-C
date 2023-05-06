//PROGRAM TO GETTING SETTING CLEARING BITS FROM LSB

#include<stdio.h>


#define GET(num,bit) (num & ((1 << bit) -1 ))
#define SET(num,bit) (num | ( (1 << bit) -1))
#define CLEAR(num,bit) (num & ~ ((1 << bit) -1))

int main()
{
    int num,bit;
    
    printf("Enter the number:");
    scanf("%d",&num);

    printf("Enter the bits:");
    scanf("%d",&bit);

    printf("GET bit is:%d\n",GET(num,bit));

    printf("SET bit is:%d\n",SET(num,bit));
    printf("CLEAR bit is:%d\n",CLEAR(num,bit));
    return 0;
}
