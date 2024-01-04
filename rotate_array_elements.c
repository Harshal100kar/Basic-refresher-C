/* Program to rotate the elements of an array
 * Enter the size of array: 5
Enter the elements of array: 1 2 3 4 5
Enter the number of positions to rotate: 2
Rotated array is: 4 5 1 2 3
*/
#include <stdio.h>

void rotateArray(int arr[], int size, int positions) {
    int temp, i;

    // Perform rotations
    for (int p = 0; p < positions; p++) {
        temp = arr[0];
        for (i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[i] = temp;
    }
}

int main() {
    int size, i, positions;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &positions);

    rotateArray(arr, size, positions);

    printf("Rotated array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

