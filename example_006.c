#include <stdio.h>
int main() {
    int dividiend, divisor, quotient, remainder;

    printf("Введите делимое (целое число): ");
    scanf("%d", &dividiend);

    printf("Введите делитель (целое число): ");
    scanf("%d", &divisor);

    quotient = dividiend / divisor;
    remainder = dividiend % divisor;

    printf("Частное = %d\n", quotient);
    printf("Остаток = %d\n", remainder);

    return 0;
}