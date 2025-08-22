/*
 * Escrever função squeeze(s1, s2) que deleta qualquer caractere de s2 em s1
 */

#include <stdio.h>

#define MAX_BUF_SIZE 100

int squeeze(char s1[], const char s2[]);

int main(void) {
    char buffer[] = "O cabelo de joao está sendo afogado";
    const char exclude[] = "aeiou";
    
    /*
    int i, j, k;
    int found;
    
    i = j = k = 0;
    for (i = j = 0; buffer[i]!='\0'; ++i) {
        found = 0;
        for (k=0; exclude[k]!='\0'; ++k) {
            if (buffer[i]==exclude[k]) {
                found = 1;
                break;
            }
        }

        if (found != 1) {
            buffer[j] = buffer[i];
            j++;
        }
    }

    buffer[j] = '\0';
    */

    int n = squeeze(buffer, exclude);
    
    printf("%s %d\n", buffer, n);

    return 0;
}

int squeeze(char s1[], const char s2[]) {
    int i, j, k;
    int found;
    
    i = j = k = 0;
    for (i = j = 0; s1[i]!='\0'; ++i) {
        found = 0;
        for (k=0; s2[k]!='\0'; ++k) {
            if (s1[i]==s2[k]) {
                found = 1;
                break;
            }
        }

        if (found != 1) {
            s1[j] = s1[i];
            j++;
        }
    }

    s1[j] = '\0';

    return j;
}

