#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "");

    char choiseChar;

    printf("Ingrese \'Y\' para aceptar, o \'N\' ingrese para rechazar: ");
    scanf(" %c", &choiseChar);

    if(choiseChar == 'a' || choiseChar=='A'){
        printf("Aceptado al ingresar %c como opción ",choiseChar);
    }else if (choiseChar == 'n'|| choiseChar=='N'){
        printf("Rechazado al ingresar %c como opción ",choiseChar);
    }else{
        printf("Debe ingresar una de las dos opciones");
    }

    return 0;
}