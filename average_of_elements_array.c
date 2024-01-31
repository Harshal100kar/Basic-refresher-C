/* C program to find the average of elements in an array
 * Enter the size of array:5
Enter the elements of array:13 5 -1 8 17
The Average is 8.400000
*/
#include <stdio.h>

int main() {
    int size,sum=0;
   printf("Enter the size of array:");
   scanf("%d",&size);
   int arr[size];
   printf("Enter the elements of array:");
   for(int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++)
   {
       sum=sum+arr[i];
   }
  float avg = (float)sum/size;
   printf("The Average is %f\n",avg);
  
    return 0;
}

