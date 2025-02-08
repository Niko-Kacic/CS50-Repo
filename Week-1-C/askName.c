#include <stdio.h>
#include <string.h>  

int main(void) {
    char answer[50]; 

    printf("What's your name? ");
    fgets(answer, 50, stdin);  

    size_t len = strlen(answer);
    if (len > 0 && answer[len-1] == '\n') {
        answer[len-1] = '\0';
    }

    printf("Hello, %s\n", answer);

    return 0;
}
