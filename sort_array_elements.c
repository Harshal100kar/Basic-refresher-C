/* C program to sort the elements in ascending order
 * this is a bubble sort technique
 * Enter the size of array: 5
Enter the elements of array: 12 32 16 65 80
After sorting the elements of array: 12 16 32 65 80
*/
#include <stdio.h>

void sort_array(int arr[], int size);

void sort_array(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sort_array(arr, size);

    printf("After sorting the elements of array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

