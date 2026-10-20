//16
//mkdir pw04 && cd pw04
//nano pw04-5.c
#include <stdio.h>

double f_to_c(double f);

int main(void) {
    double value;

    printf("Введите температуру в F (не число или Ctrl+D для выхода): ");
    while (scanf("%lf", &value) == 1) {
        printf("%.2f F = %.2f C\n", value, f_to_c(value));
        printf("Введите температуру в F (не число или Ctrl+D для выхода): ");
    }

    printf("\nРабота завершена.\n");
    return 0;
}

double f_to_c(double f) {
    const double OFFSET = 32.0;
    const double MUL = 5.0;
    const double DIV = 9.0;
    return (f - OFFSET) * MUL / DIV;
}
//gcc pw04-5.c -o pw04-5
// ./pw04-5
