/*
 * Escrever uma função lower(char* txt) que transforme letras maiúsculas em minúsculas utilizando ternário
 */

#include <stdio.h>
#include <stdlib.h>

int lower(int c);

int main(void) {
    printf("%c\n", lower('C'));
    return EXIT_SUCCESS;
}

int lower(int c) {
    return c = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
