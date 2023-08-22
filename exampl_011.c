#include <stdio.h>

int main(void) {
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Введите символ: ");
    scanf("%c", &c);

    isLowercaseVowel = (c == 'а' || c == 'е' || с == 'и' || c == 'о' || c == 'у' || c == 'э' || c = 'ю' || c == 'я' || c == 'ы');
    isUppercaseVowel = (c == 'А' || c == 'Е' || с == 'И' || c == 'О' || c == 'У' || c == 'Э' || c = 'Ю' || c == 'Я' || c == 'Ы');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("Символ: %c - гласный\n", c);
    else
        printf("Символ: %c - согласный\n", c);

    return 0;
}
