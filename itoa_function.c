#include<stdio.h>
#include<string.h>

void itoa(char *numstr, char *str);

int main() {
    int num;
    char numstr[50];

    printf("Enter the number: ");
    scanf("%d", &num);

    sprintf(numstr, "%d", num);
    char str[strlen(numstr) + 1];

    itoa(numstr, str);

    printf("Integer to string is %s\n", str);

    return 0;
}

void itoa(char *numstr, char *str) {
    char *sptr = numstr;

    while (*numstr) {
        if ((*numstr == '+' || *numstr == '-') && numstr == sptr) {
            *str++ = *numstr++;
        } else if (*numstr >= '0' && *numstr <= '9') {
            *str++ = *numstr++;
        } else {
            break;
        }
    }

    *str = '\0';
}

