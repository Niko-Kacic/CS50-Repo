#include <stdio.h>
#include <string.h>  

int main(void) {
    char hola[6] = "Hola!"; 
    char mundo[6] = "Mundo";
    
    printf("%s " "%s\n", hola, mundo);

    printf("%i %i %i %i %i %i", hola[0], hola[1], hola[2], hola[3], hola[4], hola[5] );

    return 0;
}
