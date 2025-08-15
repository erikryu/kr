#include <stdio.h>

#define PRINTABLE_CHAR 95

int main(void) {
    int c, k;
    //char chrs[26];
    int qchar[PRINTABLE_CHAR];

    for(int i=0; i<PRINTABLE_CHAR; ++i)
    {
        qchar[i] = 0;
    }

    while ((c=getchar())!=EOF) {
        if (c >=32 && c<=127) {
            ++qchar[c-32];
        }
    }

    for (k=0; k<PRINTABLE_CHAR; ++k){
        printf("%d ", qchar[k]);
    }

    printf("\n");
}
