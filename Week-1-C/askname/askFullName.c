#include <stdio.h>
#include <string.h>  

int main(void) {
    char firstName[50]; 
    char LastName[50]; 

    printf("What's your first name? ");
    fgets(firstName, 50, stdin);  

    printf("and your last name? ");
    fgets(LastName, 50, stdin);  

    size_t lenFirstName = strlen(firstName);
    if (lenFirstName > 0 && firstName[lenFirstName-1] == '\n') {
        firstName[lenFirstName-1] = '\0';
    }

    size_t lenLastName = strlen(LastName);
    if (lenLastName > 0 && firstName[lenLastName-1] == '\n') {
        LastName[lenLastName-1] = '\0';
    }

    printf("Hello, %s %s", firstName, LastName);

    return 0;
}
