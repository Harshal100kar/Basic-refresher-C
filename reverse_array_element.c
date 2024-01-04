/* Program to reverse the elements of an array
 * Enter the size of array:3
Enter the elements of array:-1 24 3
Reverse array is:3 24 -1  */

#include<stdio.h>
int  revers_array(int arr[],int size);
int  revers_array(int arr[],int size)
{
    int start=0;
    int end= size-1;

    while(start<end)
    {
        int temp =arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}
int main()
{
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    revers_array(arr,size);
     printf("Reverse array is:");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
