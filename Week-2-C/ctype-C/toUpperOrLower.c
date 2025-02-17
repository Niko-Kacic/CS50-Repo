#include <stdio.h>
#include <string.h>

int main(void) {
    char toTransform[50];
    printf("Ingresa palabra a transformar: ");
    fgets(toTransform, 50, stdin);

    size_t changeTo = strlen(toTransform);
    if (changeTo > 0 && toTransform[changeTo - 1] == '\n') {
        toTransform[changeTo - 1] = '\0';
        
    }

    printf("Output: ");
    for (int i = 0; i < changeTo; i++) {

        if(toTransform[i] >= 'a' && toTransform[i] <= 'z'){
            printf("%c",toTransform[i]-32 );
        }else{
            printf("%c ", toTransform[i]);
        }
        
    }
    printf("\n");  

    return 0;
}
