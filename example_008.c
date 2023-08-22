#include <stdio.h>
int main() {
    int a;
    long L_a;
    long long LL_a;

    double d;
    long double L_d;

    printf("Размер int = %ld байт\n", sizeof(a));
    printf("Размер long = %ld байт\n", sizeof(L_a));
    printf("Размер long long = %ld байт\n", sizeof(LL_a));

    printf("Размер double = %ld байт\n", sizeof(d));
    printf("Размер long double = %ld байт\n", sizeof(L_d));

    return 0;
}
