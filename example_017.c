#include <stdio.h>

int main() {
    char c;

    printf("Видите символ: \n");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("Символ: %c - алфавитный\n", c);
    else
        printf("Символ: %c - не алфавитный\n", c);

    return 0;
}
