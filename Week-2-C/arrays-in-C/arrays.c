#include <stdio.h>

void cleanBuffer();

int main(void) {
    int scores[3];

    for (int i = 0; i < 3; i++) {
        while (1) {
            printf("Score %d :  ", i + 1);
            if (scanf("%d", &scores[i]) != 1) {
                printf("Ingrese un número válido\n");
                cleanBuffer();
            } else {
                break;
            }
        }
    }

    printf("Average: %.1lf\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    return 0;
}

void cleanBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}
