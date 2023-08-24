#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Введите положительное целое число: \n");
    scanf("%d", &n);

    i = 0;
    while (i <= n) {
        sum += i;
        ++i;
    }
    printf("Вы ввели: %d\n", n);
    printf("Сумма чисел от 1 до %d = %d\n", n, sum);

    return 0;
}

