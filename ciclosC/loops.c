#include <stdio.h>
#include <locale.h>


int main(void){
    setlocale(LC_ALL, "");

    int counter = 3;

    while(counter >0){
        printf("Menos %d \n",counter);
        counter--;
    }

    return 0;
}