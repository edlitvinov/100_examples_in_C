// Вычисление НОД двух чисел второй способ с циклом while
#include <stdio.h>

int main() {
    int n1, n2, i, gcd;

    printf("Введите два целых числа: \n");
    scanf("%d %d", &n1, &n2);
    // printf("Первое число: %d\nВторое число: %d\n", n1, n2);

    while (n1 != n2) {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    printf("НОД этих чисел: %d\n", n1);

    return 0;
}
