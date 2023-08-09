/* C program to find the second largest element in an array
   Enter the size of an array:3
Enter the elements of an array:10 12 13
Elements of an array are:10 12 13 
The second largest element in an array is:12
*/

#include<stdio.h>

int find(int *arr,int size);

int main()
{
    int size,i,second_largest;

    printf("Enter the size of an array:");
    scanf("%d",&size);

    int arr[size];
      printf("Enter the elements of an array:");
      for(i=0;i<size;i++)
      {
          scanf("%d",&arr[i]);
      }
       printf("Elements of an array are:");
       for(i=0;i<size;i++)
       {
           printf("%d ",arr[i]);
       }
       printf("\n");
    second_largest=find(arr,size);

    printf("The second largest element in an array is:%d\n",second_largest);
}
int find(int *arr,int size)
{
    int largest=arr[0],second_largest=arr[1];

    for(int i=0;i<size;i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(second_largest < arr[i] && arr[i] < largest)
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
}
   
