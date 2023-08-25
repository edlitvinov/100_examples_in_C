// Степень числа
#include <stdio.h>

int main() {
    int num, expanent;
    long long res = 1;

    printf("Введите число: \n");
    scanf("%d", &num);

    printf("Введите степень: \n");
    scanf("%d", &expanent);

    while (expanent != 0) {
        res *= num;
        --expanent;
    }

    printf("Результат = %lld\n", res);

    return 0;
}

