// Является ли число простым
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Введите целое положительное число: \n");
    scanf("%d", &n);

    for (i = 2; i <= n/2; ++i) {
        if (n%i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d - простое число\n", n);
    else
        printf("%d - не является простым числом\n", n);

    return 0;
}
