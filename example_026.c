// Является ли число палиндромом
#include <stdio.h>

int main() {
    int n, reversInt = 0, remainder, originalInt;

    printf("Введите целое число: \n");
    scanf("%d", &n);

    originalInt = n;

    while (n != 0) {
        remainder = n % 10;
        reversInt = reversInt * 10 + remainder;
        n /= 10;
    }

    if (originalInt == reversInt) 
        printf("%d - палиндром\n", originalInt);
    else
        printf("%d - не палиндром\n", originalInt);

    return 0;
}
