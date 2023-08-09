/* C program to remove duplicate from an array
   Enter the size of an array:7
Enter the elements in an array:2 3 4 2 2 3 1
Elements in an array are:2 3 4 2 2 3 1 
Elements after REMOVING DUPLICATES in an array are:2 3 4 1 
*/

#include<stdio.h>

int main()
{
    int size,i,j,k;                       //declaring variables
    printf("Enter the size of an array:");
    scanf("%d",&size);

    int arr[size];                       //declaring an array
    printf("Enter the elements in an array:");
    for(i=0;i<size;i++)                 //taking input form users
    {
        scanf("%d",&arr[i]);
    }
   printf("Elements in an array are:");
    for(i=0;i<size;i++)                //printing the array elements
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i=0;i<size-1;i++)           //loop run upto size-1
    {
        for(j=i+1;j<size;j++)       //this loop will start from arr[1]
        {
            if(arr[i] == arr[j])   //comparing the 1st elemnet and its next elemnt
            {
                for(k=j;k<size;k++)  //if both elements found same then
                {
                    arr[k]=arr[k+1]; //at that index replace with next index like left shifting
                }
                size--;  //reducing the size
                j--;     //to avoid skipping form j++
            }
        }
    }
    printf("Elements after REMOVING DUPLICATES in an array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);  //printing array after removing duplicates
    }
    printf("\n");

    return 0;
}
