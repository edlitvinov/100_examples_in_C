#include <stdio.h>

int main() {
    int year;

    printf("Введите год: \n");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("%d - високосный год\n", year);
            else
                printf("%d - невисокосный год\n", year);
        } else
            printf("%d - високосный год\n", year);
    } else
        printf("%d - невисокосный год\n", year);

    return 0;
}
