/*
 * Função invert(x, p n) que retorna x com os n bits a partir de p invertidos
 */
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void) {
    printf("%d\n", invert(120, 3, 2));
    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1U << n) - 1) << (p - n + 1);
    
    return x^mask;
}

