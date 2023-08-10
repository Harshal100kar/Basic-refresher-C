/* C program to generate fibonacci series using recursion
 * Enter the number upto you want fibonacci series:5
The fibonacci series is: 0 1 1 2 3 5
*/

#include<stdio.h>

int fibonacci(int limit,int term1,int term2, int nxt_term); //function prototype
int main()
{
    int limit,result;                               //declaring variables
    printf("Enter the number upto you want fibonacci series:");  //prompting the message to users
    scanf("%d",&limit);                           //taking input from users

    if(limit < 0)  //if the entered number is -ve
    {
        printf("Invalid input");   //printing invalid message
    }
    else
    {
        printf("The fibonacci series is: ");
    fibonacci(limit,0,1,0);    //calling the function
    printf("\n");
    }
    return 0;

}
int fibonacci(int limit,int term1,int term2, int nxt_term)      //function defination
{
    if(term1 <= limit)   //base condition
    {
        printf("%d ",term1);
        nxt_term=term1;
        term1=term1+term2;
        term2=nxt_term;


    fibonacci(limit, term1, term2, nxt_term);     //recursive case
    }
}
