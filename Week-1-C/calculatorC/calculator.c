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
void multiplyNum(Numbers *numbers);
void divideNum(Numbers *numbers);

int main(void){
    setlocale(LC_ALL, "");

    Numbers numbers;

    do {
        printf("Ingrese una opción: \n1-Sumar \n2-Restar \n3-Multiplicar \n4-Dividir \n5-Salir \n->: ");
        if (!validarEntradaInt(&numbers.choice)) {
            continue;
        }else {
            switch (numbers.choice) {
                case 1:
                    printf("Opción uno Sumar\n");
                    addNums(&numbers);
                    printf("La suma de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 2:
                    printf("Opción dos Restar\n");
                    sustracNums(&numbers);
                    printf("La resta de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 3:
                    printf("Opción tres Multiplicar\n");
                    multiplyNum(&numbers);
                    printf("La multiplicación de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 4:
                    printf("Opción cuatro Dividir\n");
                    divideNum(&numbers);
                    printf("La divición de %.1lf y %.1lf es: %.1lf\n", numbers.num1, numbers.num2, numbers.result);
                    numbers.choice = 0;
                    break;
                case 5:
                    printf("Adios! ");
                    numbers.choice =0;
                    break;
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
    printf("Ingrese un número: ");
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

void multiplyNum(Numbers *numbers){
    while (!validarEntradaDouble(&numbers->num1));
    while (!validarEntradaDouble(&numbers->num2));

    numbers->result = numbers->num1 * numbers->num2;
}

void divideNum(Numbers *numbers){
    while (!validarEntradaDouble(&numbers->num1));
    while (!validarEntradaDouble(&numbers->num2));

    numbers->result = numbers->num1 / numbers->num2;
}