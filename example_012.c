#include <stdio.h>

int main() {
    int n1, n2;

    printf("Введите два числа: \n");
    scanf("%d %d", &n1, &n2);

    printf("n1 = %d\nn2 = %d\n", n1, n2);

    if(n1 > n2)
        printf("%d - максимум.\n", n1);
    if(n2 > n1) 
        printf("%d - максимум.\n", n2);
        
    return 0;
}
