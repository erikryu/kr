/*
 * Function setbits(x, p, n y):
 * retorna x com os n bits mais à direita de y, a partir da posição p
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
    int ymask = y & ((1U << n) - 1);
    ymask = ymask << (p - n + 1);

    int xmask = ((1U << n) - 1) << (p - n + 1);

    return (x & ~xmask) | ymask;
}
