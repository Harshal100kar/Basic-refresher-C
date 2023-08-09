/* C program to find the largest and smallest number in an array
  Enter the size of an arary:5
Enter the elements in an arary: 1 2 -3 4 -5
Elements of an arary are:1 2 -3 4 -5
The LARGEST element in an array is: 4
The SMALLEST element in an array is: -5
*/

#include<stdio.h>

int print(int *arr, int size, int *largest, int *smallest);  //function prortotype
int main()
{ 
    int size,largest,smallest;                               //variable declaration
    printf("Enter the size of an arary:");                    
    scanf("%d",&size);
    
    int arr[size];                                          //declaring an arary
     printf("Enter the elements in an arary:");
     for(int i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Elements of an arary are:");                   //printing elements of an array
     for(int i=0;i<size;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\n");
     print(arr,size,&largest,&smallest);                    //calling the function
     printf("The LARGEST element in an array is: %d\n",largest);
     printf("The SMALLEST element in an array is: %d\n",smallest);
     
     return 0;
}
int print(int *arr, int size, int *largest, int *smallest)   //function definition
{
    *largest = *smallest = arr[0];
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] > *largest)
        {
            *largest = arr[i];
        }
        if(arr[i] < *smallest)
        {
            *smallest = arr[i];
        }
    }
    
}
