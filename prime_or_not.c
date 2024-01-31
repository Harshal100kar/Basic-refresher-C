#include<stdio.h>

int is_prime(int num);

int is_prime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // num is not prime
        }
    }
    return 1; // num is prime
}

int main() {
    int num;
    
    printf("Enter a number:");
    scanf("%d", &num);
    printf("\n");
    if(num >= 2)
    {
    if (is_prime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    }
    else
    {
         printf("Invalid input");
    }
    
    return 0;
}

