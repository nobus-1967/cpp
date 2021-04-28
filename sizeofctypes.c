// Некоторые символические константы из limit.h и float.h
#include <stdio.h>
#include <limits.h> // целочисленные типы
#include <float.h>  // типы с плавающей точкой
int main(void)
{
    printf("Some number limits for your system:\n");
    printf("- one byte: \t\t\t% d bits\n", CHAR_BIT);
    printf("- float precision: \t\t% d digits\n", FLT_DIG);
    printf("- bites in char: \t\t% d\n", CHAR_BIT);
    printf("- smallest int: \t\t% d\n", INT_MIN);
    printf("- biggest int: \t\t\t% d\n", INT_MAX);
    printf("- smallest char: \t\t% d\n", CHAR_MIN);
    printf("- biggest char: \t\t% d\n", CHAR_MAX);
    printf("- smallest short: \t\t% d\n", SHRT_MIN);
    printf("- biggest short: \t\t% d\n", SHRT_MAX);
    printf("- smallest long: \t\t% ld\n", LONG_MIN);
    printf("- biggest long: \t\t% ld\n", LONG_MAX);
    printf("- smallest long long: \t\t% lld\n", LLONG_MIN);
    printf("- biggest long long: \t\t% lld\n", LLONG_MAX);
    printf("- smallest normal float: \t% e\n", FLT_MIN);
    printf("- largest normal float: \t% e\n", FLT_MAX);
    printf("- smallest double: \t\t% e\n", DBL_MIN);
    printf("- largest double: \t\t% e\n", DBL_MAX);
    printf("- smallest long double: \t% Le\n", LDBL_MIN);
    printf("- largest long double: \t\t% Le\n", LDBL_MAX);

    return 0;
}
