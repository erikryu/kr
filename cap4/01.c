#include <stdio.h>

#define BUFF 100

int line(char s[], int lim);
int strindex(char s[], char t[], unsigned n);

int main(void) {
    int len;
    char s[BUFF];
    char t[] = "ia";

    while ((len=line(s, BUFF))>0) {
        strindex(s, t, len);
    }

    return 0;
}

int line(char s[], int lim) {
    int i, c;

    for (i=0, c=0;   lim > 0  && (c=getchar())!=EOF && c!='\n'; --lim)
        s[i++] = c;
    if (c=='\n')
        s[i++] = '\0';
    
    return i;
   
}

// Procura em s[] a ocorrência mais à direita de t[]
int strindex(char s[], char t[], unsigned n) {
    int i, j;

    for (i=0; t[i]!='\0'; ++i) { // Loop dentro de t[]
        for (j = n; j > 0 && s[j] != '\n'; --j) { // Loop dentro de s[]
            if (t[i] == s[j]) {
                printf("At %d\n", j);
            }
        }
    }
    return 0;
}
