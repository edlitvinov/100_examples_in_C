// калькулятор

# include <stdio.h>

int main() {
    char oper;
    double firstNum, secNum;

    printf("Введите оператор (+, -, *, /): \n");
    scanf("%c", &oper);

    printf("Введите два операнда: \n");
    scanf("%lf %lf", &firstNum, &secNum);

    switch(oper) {
        case '+' :
            printf("%.2lf + %.2lf = %.2lf\n", firstNum, secNum, firstNum + secNum);
            break;
        case '-' :
            printf("%.2lf - %.2lf = %.2lf\n", firstNum, secNum, firstNum - secNum);
            break;
        case '*' :
            printf("%.2lf * %.2lf = %.2lf\n", firstNum, secNum, firstNum * secNum);
            break;
        case '/' :
            if (secNum != 0) 
                printf("%.2lf / %.2lf = %.2lf\n", firstNum, secNum, firstNum / secNum);
            else printf("На ноль делить нельзя!");
            break;
        default:
            printf("Ошибка! Введите правильно оператор!\n");
    }

    return 0;
}
