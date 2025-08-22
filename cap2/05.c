/*
 * Write a any(s1, s2) function that return the first location of any s2's char in s1.
 * return -1 if s1 contains no chars from s2
 */

#include <stdio.h>

int any(char s1[], const char s2[]);

int main(void) {
    char s1[] = "qwertyoui";
    const char s2[] = "ui";

    int n = any(s1, s2);

    printf("A primeira ocorrência é em: %d\n", n + 1);
    return 0;
}

int any(char s1[], const char s2[]) {
    int i, j;
    int first_occurrence;

    for (i=0; s1[i]!='\0'; ++i) {
        for (j=0; s2[j]!='\0'; ++j) {
            if (s1[i]==s2[j]) {
                first_occurrence = i;
                return first_occurrence;
            }
        }
    }

    return -1;
}
