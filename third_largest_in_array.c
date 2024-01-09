/*
 * C program to find the third largest element in an array
 * Enter the size of array:5
Enter the elemnets of array:10 22 13 14 6
the elemnets of array are:10 22 13 14 6
the third largest element in array is: 13
*/

#include<stdio.h>
#include<limits.h>  //this header file contain INT_MIN (Assign the minimum value for intrgers)

// Function to find the third largest element in an array
int third_largest(int *arr, int size) {
    int first, second, third;
    first = second = third = INT_MIN;

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            // Update first, shift other values accordingly
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            // Update second, shift other values accordingly
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            // Update third
            third = arr[i];
        }
    }

    return third;  // Return the third largest element
}

int main() {
    int size, i;

    // Input the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("The elements of array are: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find and display the third largest element
    int third_largest_element = third_largest(arr, size);
    printf("The third largest element in array is: %d\n", third_largest_element);

    return 0;
}

