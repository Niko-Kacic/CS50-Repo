#include <stdio.h>
#include <string.h>  

int main(void) {
    char hola[6] = "Hola!"; 
    char mundo[6] = "Mundo";


    
    printf("%s " "%s\n", hola, mundo);

    printf("%i %i %i %i %i %i\n", hola[0], hola[1], hola[2], hola[3], hola[4], hola[5] );

    char *words[2];//aprendiendo uso punteros en el array de char
    words[0] = "wenas";
    words[1] = "gente";

    printf("%s ", words[0]);
    printf("%s\n", words[1]);
    printf("%c%c%c%c%c ", words[0][0], words[0][1], words[0][2], words[0][3], words[0][4], words[0][5]);
    printf("%c%c%c%c%c", words[1][0], words[1][1], words[1][2], words[1][3], words[1][4], words[1][5]);

    return 0;
}
