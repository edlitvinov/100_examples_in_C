#include <stdio.h>
int main() {
    int a, b, temp;

    printf("Введите (целое) число: \n");
    scanf("%d", &a);
    printf("В переменной a находтся число %d\n", a);

    printf("Введите (целое) число: \n");
    scanf("%d", &b);
    printf("В переменной b находтся число %d\n", b);

    printf("Меняем числа местами\n");

    temp = a;
    a = b;
    b = temp;

    printf("Теперь в переменных:\na = %d\nb = %d\n", a, b);

    return 0;
}


