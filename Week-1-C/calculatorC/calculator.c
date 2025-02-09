#include <stdio.h>
#include <locale.h>

typedef struct {
    double num1;
    double num2;
    double result;    
    int choise;
} Numbers;


void cleanBuffer();
double addNums(Numbers *numbers);

int main(void){
    setlocale(LC_ALL, "");

    Numbers numbers;

    do {
        printf("Ingrese una opción 1 o 2: \n");
        if (scanf("%d", &numbers.choise)!=1){
            printf("Ingrese un npumero valido\n");
            cleanBuffer();
        }else{
            switch (numbers.choise)
            {
                case 1:
                    printf("Opción uno");
                    addNums(&numbers);
                    printf("La suma de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choise = 0;
                    break;
                case 2:
                    printf("Opción dos");
                    numbers.choise = 0;
                    break;
                default:
                    break;
            }
        }    

    }while(numbers.choise !=0);
}

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
     
    }    
}

double addNums(Numbers *numbers){
    
    printf("Ingrese un número: ");
        if (scanf("%lf", &numbers->num1)!=1){
            printf("Ingrese un número valido ");
            cleanBuffer();
        }

    printf("Ingrese otro número: ");
        if (scanf("%lf", &numbers->num2)!=1){
            printf("Ingrese un número valido ");
            cleanBuffer();
        }
    
    numbers->result = numbers->num1 + numbers->num2;
}