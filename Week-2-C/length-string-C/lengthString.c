#include <stdio.h>
#include <string.h>  

int main(void){

    char lengthString[50];


    printf("Ingresa una palabra: ");
    fgets(lengthString, 50, stdin);

    size_t lenString = strlen(lengthString);
    if (lenString > 0 && lengthString[lenString-1]== '\n'){
        lengthString[lenString-1] = '\0';
        lenString--;
    }



    printf("El largo la palabra %s es de %zu caracteres", lengthString, lenString);

    return 0;
}
