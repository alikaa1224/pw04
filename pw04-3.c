//6
//mkdir pw04 && cd pw04
//nano pw04-3.c
#include <stdio.h>

int main(void) {
    int n;
    int i = 0;
    int a = 1;

    printf("Введите N (от 1 до 13): ");
    if (scanf("%d", &n) == 1) {
        if (n >= 1) {
            if (n <= 13) {
                while (i < n) {
                    printf("%d ", a);
                    a = a * 5;
                    i++;
                }
                printf("\n");
            } else {
                printf("Ошибка: N больше 13.\n");
            }
        } else {
            printf("Ошибка: N меньше 1.\n");
        }
    } else {
        printf("Ошибка: введено не число.\n");
    }

    return 0;
}
//gcc pw04-3.c -o pw04-3
// ./pw04-3
