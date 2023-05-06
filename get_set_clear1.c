/*PROGRAM TO GET SET AND CLEAR THE BITS*/

#include<stdio.h>

#define   GET(num,pos)  (1 & (num >> pos))
#define   SET(num,pos)  (num | 1 << pos)
#define   CLEAR(num,pos) ( num & (~(1 << pos)))

int main()
{
    int num,pos;
    printf("Enter the number:");
    scanf("%d",&num);


    printf("Enter the pos:");
    scanf("%d",&pos);

    printf("GET bit is : %d\n",GET(num,pos));
    printf("SET bit is : %d\n",SET(num,pos));
    printf("CLEAR bit is : %d\n",CLEAR(num,pos));

    return 0;




}
