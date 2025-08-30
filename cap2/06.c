/*
 * Function setbits(x, p, n y):
 * retorna x com n bits que começam na posição p dos n bits mais à direita de y
 */

#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void) {
    printf("O número é: %d\n", setbits(210, 4, 3, 230));
    //printf("O número é: %d\n", getbits(210, 7, 3));
}

unsigned getbits(unsigned x, int p, int n) {
    return (x>>(p-n+1)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned k = p - n + 1;
    unsigned j = ~(~0 << n);

    return x | (~(j << k) & x) | ((y & j) << k);
}
