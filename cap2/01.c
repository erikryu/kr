#include <stdio.h>
#include <limits.h>
#include <float.h>
/*
 * Programa para printar os limites de char, short, int, long
 * Tanto signed quanto unsigned
 */

int main(void)
{
    printf("Min char: %d\tMax char: %d\n", CHAR_MIN, CHAR_MAX);
    printf("Min int: %d\tMax int: %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int max: %zu\n", UINT_MAX); 
    printf("Min long: %zi\tMax long: %zi\n", LONG_MIN, LONG_MAX);
    printf("Max unsigned long: %zu\n", ULONG_MAX);
    return 0;
}
