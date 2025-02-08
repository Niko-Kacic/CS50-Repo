#include <stdio.h>
#include <locale.h>

int main(void) {
    
    setlocale(LC_ALL, "");


    int x;
    printf("Ingresa un número: ");
    if (scanf("%d", &x)!=1){
        printf("Entrada invalidad, debe ser un número");
        return 1;
    } else{
        printf("El valor es %d", x);
    }
    
    return 0;

}
