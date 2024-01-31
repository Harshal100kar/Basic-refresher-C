/*
 * Enter the Name: harsh
Enter the Age: 22
Enter the number: 0987654321
The Name is: harsh
The Age is: 22
Phone number: 0987654321
*/

#include<stdio.h>
#include<string.h>

int main() {
    char name[20];
    printf("Enter the Name: ");
    fgets(name, sizeof(name), stdin);
   

    char age[4];
    printf("Enter the Age: ");
    fgets(age, sizeof(age), stdin);
    

    char number[12];
    int isValidNumber = 0;

    while (!isValidNumber) {
        printf("Enter the number: ");
        fgets(number, sizeof(number), stdin);
	number[strcspn(number,"\n")]='\0';

        int ret = strlen(number);

        if (ret == 10 ) {
           
            isValidNumber = 1;
        } else {
            printf("Error: Please enter a valid 10-digit phone number.\n");
        }
    }
    
     printf("The Name is: %s", name);
     printf("The Age is: %s", age);
     printf("Phone number: %s\n", number);

    return 0;
}

