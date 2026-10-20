//12
//mkdir pw04 && cd pw04
//nano pw04-4.c
#include <stdio.h>

int main(void) {
    int n;
    int i = 1;
    int s = 0;

    printf("Введите N (от 1 до 300): ");
    if (scanf("%d", &n) == 1) {
        if (n >= 1) {
            if (n <= 300) {
                while (i <= n) {
                    s += i * i * i;
                    i++;
                }
                printf("S = 1^3 + 2^3 + ... + %d^3 = %d\n", n, s);
            } else {
                printf("Ошибка: N больше 300.\n");
            }
        } else {
            printf("Ошибка: N меньше 1.\n");
        }
    } else {
        printf("Ошибка: введено не число.\n");
    }

    return 0;
}
//gcc pw04-4.c -o pw04-4
// ./pw04-4
  
