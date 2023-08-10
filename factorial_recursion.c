/* C program to find the factorial of given number
   Enter the number:4
The factorial of 4 is 24
*/

#include<stdio.h>

int factorial(int num);           //function prototype
int main()
{
    int num,result;               //declaring variables
    printf("Enter the number:");
    scanf("%d",&num);
    result =factorial(num);        //calling the function
    printf("The factorial of %d is %d\n",num,result);
    return 0;
}
int factorial(int num)           //function definotion
{
    if(num <= 1)                //Base condition
    {
    return 1;
    }
    else
    {
        return num * factorial(num-1);  //recursive case
    }
}

