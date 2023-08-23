#include <stdio.h>

int main() {
    double num;

    printf("Введите число: \n");
    scanf("%lf", &num);

    if (num <= 0.0) 
    {
        if (num == 0.0)
            printf("Вы ввели: 0\n");
        else
            printf("Вы ввели:%.1lf\nЭто число отрицательное.\n", num);
    }
    else
        printf("Вы ввели:%.1lf\nЭто число положительное.\n", num);

    return 0;
}
