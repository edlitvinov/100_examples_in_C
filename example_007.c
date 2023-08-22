#include <stdio.h>
int main() {
    char TypeChar;
    unsigned char TypeUnChar;
    signed char TypeSignChar;
    short TypeShort;
    unsigned short TypeUnShort; 
    int TypeInt;
    unsigned int TypeUnInt;
    long TypeLong;
    unsigned long TypeUnLong;
    long long TypeLL;
    unsigned long long TypeUnLL;
    float TypeFloat;
    double TypeDoub;
    long double TypeLD;

    printf("Размер char: %ld байт\n", sizeof(TypeChar));
    printf("Размер unsigned char: %ld байт\n", sizeof(TypeUnChar));
    printf("Размер signed char: %ld байт\n", sizeof(TypeSignChar));
    printf("Размер short: %ld байт\n", sizeof(TypeShort));
    printf("Размер unsigned short: %ld байт\n", sizeof(TypeUnShort));
    printf("Размер int: %ld байт\n", sizeof(TypeInt));
    printf("Размер unsigned int: %ld байт\n", sizeof(TypeUnInt));
    printf("Размер long: %ld байт\n", sizeof(TypeLong));
    printf("Размер unsigned long: %ld байт\n", sizeof(TypeUnLong));
    printf("Размер long long: %ld байт\n", sizeof(TypeLL));
    printf("Размер unsigned long long: %ld байт\n", sizeof(TypeUnLL));
    printf("Размер float: %ld байт\n", sizeof(TypeFloat));
    printf("Размер double: %ld байт\n", sizeof(TypeDoub));
    printf("Размер long double: %ld байт\n", sizeof(TypeLD));

    return 0;
}
