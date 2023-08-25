// Степень числа с использованием функции pow
#include <stdio.h>
#include <math.h>

int main() {
    int num, expanent;
    long long res = 1;

    printf("Введите число: \n");
    scanf("%d", &num);

    printf("Введите степень: \n");
    scanf("%d", &expanent);

    res = pow(num, expanent);

    printf("Результат = %lld\n", res);

    return 0;
}

