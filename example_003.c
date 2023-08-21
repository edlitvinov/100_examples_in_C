#include <stdio.h>

int main() {

    int num_1, num_2, sum;

    printf("Введите два целых числа: ");
    scanf("%d %d", &num_1, &num_2);
    sum = num_1 + num_2;
    printf("Сумма %d + %d = %d\n", num_1, num_2, sum);
    return 0;
}
