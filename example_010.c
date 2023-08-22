#include <stdio.h>
int main() {
    int num;

    printf("Введите целое число: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d - четное\n", num);
    else
        printf("%d - нечетное\n", num);

    return 0;
}
