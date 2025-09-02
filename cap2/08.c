/*
 * Função rightrot(x, n): Retorna o valor de x rotacionado n posições
 */


#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint8_t rightrot(uint8_t x, uint8_t n);
char* bits(uint8_t x, char bits[9]);

int main(void) {
    char b[9];
    uint8_t num = 120;

    uint8_t r = rightrot(num, 4);
    printf("%s\n", bits(num, b));
    printf("%s\n", bits(r, b));

    return 0;
}

uint8_t rightrot(uint8_t x, uint8_t n) {
    return x >> n | x << (8 - n);
}

char* bits(uint8_t x, char bits[9]) {
    for (int i = 7; i>=0;  --i) {
        bits[i] = (x&1)? '1':'0';
        x>>=1;
    }
    bits[8] = '\0';

    return bits;
}

