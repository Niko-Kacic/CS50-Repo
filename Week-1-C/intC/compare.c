#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "");
    
    int numberX;
    int numberY;
    
    printf("Ingresa un número: ");
    if (scanf("%d", &numberX)!=1){
        printf("Entrada invalidad, debe ser un número");
        return 1;
    }
    printf("Ingresa el segundo número: ");
    if (scanf("%d", &numberY)!=1){
        printf("Entrada invalidad, debe ser un número mi pana");
        return 1;
    }

    if(numberX > numberY){
        printf("El valor %d es mayor que %d ", numberX, numberY);
    }else if(numberX < numberY){
        printf("El valor %d es menor que %d ", numberX, numberY);
    }else {
        printf("Los valores %d y %d son iguales ", numberX, numberY);
    }

    
    
    return 0;

}
