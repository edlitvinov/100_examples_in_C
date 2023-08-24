#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Введите число > 0: \n");
    scanf("%d", &n);

    if (n < 0) 
        printf("Факториал отрицательного числа не существует.\n");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }

        printf("Факториал %d = %llu\n", n, factorial);
    }

    return 0;
}
