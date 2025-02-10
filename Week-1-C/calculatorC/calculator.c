#include <stdio.h>
#include <locale.h>

typedef struct {
    double num1;
    double num2;
    double result;    
    int choice;
} Numbers;


void cleanBuffer();
int validarEntradaInt(int *input);
int validarEntradaDouble(double *input);

void addNums(Numbers *numbers);
void sustracNums(Numbers *numbers);
void mutiplyNum(Numbers *numbers);

int main(void){
    setlocale(LC_ALL, "");

    Numbers numbers;

    do {
        printf("Ingrese una opción 1 o 2: \n");
        if (!validarEntradaInt(&numbers.choice)) {
            continue;
        }else {
            switch (numbers.choice) {
                case 1:
                    printf("Opción uno\n");
                    addNums(&numbers);
                    printf("La suma de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 2:
                    printf("Opción dos\n");
                    sustracNums(&numbers);
                    printf("La resta de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 3:
                    printf("Opción tres\n");
                    mutiplyNum(&numbers);
                    printf("La multiplicación de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                default:
                    printf("Opción no válida\n");
                    break;
            }
        }  

    }while(numbers.choice !=0);
}

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
     
    }    
}

int validarEntradaInt(int *input) {
    if (scanf("%d", input) != 1) {
        printf("Ingrese un número válido\n");
        cleanBuffer();
        return 0;  
    }
    return 1;
}

int validarEntradaDouble(double *input) {
    if (scanf("%lf", input) != 1) {
        printf("Ingrese un número válido\n");
        cleanBuffer();
        return 0; 
    }
    return 1;  
}


void addNums(Numbers *numbers) {
    while (!validarEntradaDouble(&numbers->num1));
    while (!validarEntradaDouble(&numbers->num2));
    
    numbers->result = numbers->num1 + numbers->num2;
}

void sustracNums(Numbers *numbers) {
    while (!validarEntradaDouble(&numbers->num1));
    while (!validarEntradaDouble(&numbers->num2));
    
    numbers->result = numbers->num1 - numbers->num2;
}

void mutiplyNum(Numbers *numbers){
    while (!validarEntradaDouble(&numbers->num1));
    while (!validarEntradaDouble(&numbers->num2));

    numbers->result = numbers->num1 * numbers->num2;
}