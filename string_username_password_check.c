/*
 * Enter username: erf
Enter password: adfa
Login failed. Please check your username and password. Remaining attempts: 2
Enter username: user123
Enter password: pass456
Login successful!
***************/
/*strcspn() calculates the length of the number of characters before the 1st occurrence of character present in both the string */

#include <stdio.h>
#include <string.h>

#define MAX_ATTEMPTS 3

int main() {
    char storedUsername[] = "user123"; // Replace with your stored username
    char storedPassword[] = "pass456"; // Replace with your stored password

    char inputUsername[50];
    char inputPassword[50];

    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter username: ");
        fgets(inputUsername, sizeof(inputUsername), stdin);
        inputUsername[strcspn(inputUsername, "\n")] = '\0'; // Remove newline character

        printf("Enter password: ");
        fgets(inputPassword, sizeof(inputPassword), stdin);
        inputPassword[strcspn(inputPassword, "\n")] = '\0'; // Remove newline character

        // Compare entered credentials with stored ones
        if (strcmp(storedUsername, inputUsername) == 0 && strcmp(storedPassword, inputPassword) == 0) {
            printf("Login successful!\n");
            break; // Exit the loop if login is successful
        } else {
            attempts++;
            printf("Login failed. Please check your username and password. Remaining attempts: %d\n", MAX_ATTEMPTS - attempts);
        }
    }

    if (attempts == MAX_ATTEMPTS) {
        printf("Maximum login attempts reached. Exiting program.\n");
    }

    return 0;
}

