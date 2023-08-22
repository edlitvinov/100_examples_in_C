#include <stdio.h>
int main() {
    char c;
    printf("Введите любой символ: ");
    scanf("%c", &c);
    printf("Вы ввели:%c\n", c);
    printf("Код ASCII %c = %d\n", c, c);
    return 0;
}
