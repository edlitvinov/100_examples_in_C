#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Введите положительное целое число: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Сумма = %d\n", sum);

    return 0;
}

