#include <stdio.h>

void cleanBuffer();
float average(int length, int array[]);

const int N = 3;

int main(void) {
    int scores[N];

    for (int i = 0; i < N; i++) {
        while (1) {
            printf("Score %d: ", i + 1);
            if (scanf("%d", &scores[i]) != 1) {
                printf("Ingrese un número válido\n");
                cleanBuffer();
            } else {
                break;  
            }
        }
    }

    printf("Average: %.1lf\n", average(N, scores));
    return 0;
}

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Limpiar el buffer de entrada
    }
}

float average(int length, int array[]) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += array[i];
    }
    return total / (float) length;
}
