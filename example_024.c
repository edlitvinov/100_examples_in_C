// Обратное число
#include <stdio.h>

int main() {
    int n, reversNum = 0, remainder;

    printf("Введите целое число: \n");
    scanf("%d", &n);
    printf("Вы ввели число: %d\n", n);

    while (n != 0) {
        remainder = n % 10;
        reversNum = reversNum * 10 + remainder;
        n /= 10;
    }

    printf("Обратное число: %d\n", reversNum);

    return 0;
}
