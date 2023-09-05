// Проверяем число Армстронга

#include <stdio.h>
#include <math.h>

int main() {
    int num, originNum, remainder, res = 0, n = 0;

    printf("Введите число: \n");
    scanf("%d", &num);

    originNum = num;

    while (originNum != 0) {
        originNum /= 10;
        ++n;
    }

    originNum = num;

    while (originNum != 0) {
        remainder = originNum % 10;
        res += pow(remainder, n);
        originNum /= 10;
    }

    if (res == num) 
        printf("%d - число Армстронга\n", num);
    else
        printf("%d - не является числом Армстронга\n", num);

    return 0;
}

