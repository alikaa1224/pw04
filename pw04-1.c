//23
//mkdir pw04 && cd pw04
//nano pw04-1.c
#include <stdio.h>
#define WATTS_IN_KW 1000

int main(void) {
    int watts = 1;
    int check;
    int kw;
    int rest;

    while (watts > 0) {
        printf("Введите мощность в Вт (0, отрицательное число, буква или Ctrl+D для выхода): ");
        check = scanf("%d", &watts);
        if (check == 1) {
            if (watts > 0) {
                kw = watts / WATTS_IN_KW;
                rest = watts % WATTS_IN_KW;
                printf("%d Вт = %d кВт %d Вт\n", watts, kw, rest);
            }
        } else {
            watts = 0;
        }
    }

    printf("Работа завершена.\n");
    return 0;
}
//gcc pw04-1.c -o pw04-1
// ./pw04-1
