#include<stdio.h>

int is_prime(int num);

int is_prime(int num) {
    int i, j, flag;
    for (i = 2; i <= num; i++) {
        flag = 1; // Assume i is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0; // i is not prime
                break;
            }
        }

        if (flag == 1) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Add a new line after printing all prime numbers
    return 0;
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num >= 2) {
        is_prime(num);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
