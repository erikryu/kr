#include <stdio.h>
#include <stdint.h>

char* bits(int8_t x, char bits[9]);
int bitcount(unsigned int x);

int main(void) {
    char b[9];

    int8_t x = 230;

    printf("O número %d tem %d 1bits.\n", x, bitcount(x));
    
    printf("%s\n", bits(x, b));
    while (x) {
        x &= (x-1);
        printf("%s\n", bits(x, b));
    }

    return 0;
}

int bitcount(unsigned int x) {
    int b;

    for (b=0; x!=0; x &= (x-1))
            b++;

    return b;
}

char* bits(int8_t x, char bits[9]) {
    for (int i = 7; i>=0;  --i) {
        bits[i] = (x&1)? '1':'0';
        x>>=1;
    }
    bits[8] = '\0';

    return bits;
}

