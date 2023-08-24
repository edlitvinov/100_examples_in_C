#include <stdio.h>

int main() {
    int n, i, sum = 0;

    do {
        printf("Введите положительное целое число > 0: \n");
        scanf("%d", &n);
    }

    while (n <= 0);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    
    printf("Вы ввели: %d\n", n);
    printf("Сумма чисел от 1 до %d = %d\n", n, sum);

    return 0;
}

