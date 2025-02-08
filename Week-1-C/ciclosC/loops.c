#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "");

    int counter = 3;

    while(counter > 0){
        printf("Menos %d \n",counter);
        counter--;
    }

    for ( int i = 0; i <= 5; i++){
        printf("Contando y sumando %d \n",i);
    }

    return 0;
}