#include <stdio.h>
int main() {
    int a, b;

    printf("Введите (целое) число: \n");
    scanf("%d", &a);
    printf("В переменной a находтся число %d\n", a);

    printf("Введите (целое) число: \n");
    scanf("%d", &b);
    printf("В переменной b находтся число %d\n", b);

    printf("Меняем числа местами\n");

    a = a - b;
    b = a + b;
    a = b - a;

    printf("Теперь в переменных:\na = %d\nb = %d\n", a, b);

    return 0;
}


