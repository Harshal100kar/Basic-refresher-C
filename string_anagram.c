/*
 * Enter the first string: abc
Enter the second string: bca
The strings "abc" and "bca" are anagrams.
/
Enter the first string: qwe
Enter the second string: vcx
The strings "qwe" and "vcx" are not anagrams.

Anagram=Two strings are called anagrams to each other if they have the same characters with equal occurrences in them but can have different orders of characters
*/
#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int areAnagrams(const char *str1, const char *str2) {
    // Create two arrays to store the count of characters
    int count1[MAX_CHARS] = {0};
    int count2[MAX_CHARS] = {0};
    int i;

    // Calculate the length of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, strings cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Count occurrences of characters in both strings
    for (i = 0; i < len1; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }

    // Compare counts of characters in both strings
    for (i = 0; i < MAX_CHARS; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    char str1[100], str2[100];

    // Input two strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("The strings \"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}
