//30
//mkdir pw04 && cd pw04
//nano pw04-2.c
#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t n;
    unsigned int input;
    float result;

    printf("Введите n (от 0 до 65535): ");
    if (scanf("%u", &input) == 1) {
        if (input <= 65535) {
            n = (uint16_t)input;
            result = (float)n * (n - 1) / 2;
            printf("Результат n*(n-1)/2 = %.2f\n", result);
            printf("sizeof(uint16_t) = %llu байт\n", (unsigned long long)sizeof(uint16_t));
            printf("sizeof(float) = %llu байт\n", (unsigned long long)sizeof(float));
            printf("sizeof(unsigned int) = %llu байт\n", (unsigned long long)sizeof(unsigned int));
        } else {
            printf("Ошибка: число больше 65535.\n");
        }
    } else {
        printf("Ошибка: введено не число.\n");
    }

    return 0;
}
//gcc pw04-2.c -o pw04-2
// ./pw04-2
  
