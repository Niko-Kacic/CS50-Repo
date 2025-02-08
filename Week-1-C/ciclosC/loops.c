#include <stdio.h>
#include <locale.h>

void counter(int n);//Prototipo de la función

int main(void){
    setlocale(LC_ALL, "");

    // int counter = 3;

    // while(counter > 0){
    //     printf("Menos %d \n",counter);
    //     counter--;
    // }

    counter(10);

    return 0;
}

void counter(int n){

    for ( int i = 0; i <= n; i++){
        printf("counting in total: %d\n", i);
    }

}
