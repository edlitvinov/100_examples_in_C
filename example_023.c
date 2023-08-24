// Подсчет количества цифр целого числа
#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Введите целое число: \n");
    scanf("%lld", &n);

    while (n != 0 ) {
        n /= 10;
        ++count;
    }

    printf("Количество цифр: %d\n", count);

    return 0;
}
