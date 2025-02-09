#include <stdio.h>
#include <locale.h>

void counter(int n);//Prototipo de la función
int validatePositiveNumber(int n);

int main(void){
    setlocale(LC_ALL, "");

    int n ;

    validatePositiveNumber(n);

    // int counter = 3;

    // while(counter > 0){
    //     printf("Menos %d \n",counter);
    //     counter--;
    // }

    return 0;
}

int validatePositiveNumber(int n){
    do {    
        printf("Ingrese un número: ");
        if (scanf("%d", &n)!=1){
            printf("Ingrese un número valido ");
            return 1;
        }else {
            counter(n);
        }
    }while( n < 0);
}

void counter(int n){

    for ( int i = 0; i <= n; i++){
        printf("counting in total: %d\n", i);
    }

}
