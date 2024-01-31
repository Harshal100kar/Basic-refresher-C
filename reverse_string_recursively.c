/*
 * Description : Program to reverse the given string using recursive method
Sample input : Enter a string : Hello World
Sample output : Reverse string is : dlroW olleH
*/

#include<stdio.h>
#include<string.h>

void reverse_string(char *str, int start, int end);

int main() {
    char str[100];
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // to remove newline char

    int length = strlen(str);
    reverse_string(str, 0, length - 1);

    printf("The reverse string is: %s", str);
    return 0;
}

void reverse_string(char *str, int start, int end) {
    if (start >= end) {
        return; // base case: if start is greater or equal to end, stop recursion
    }

    // swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // recursively call the function with updated start and end positions
    reverse_string(str, start + 1, end - 1);
}

