#include <stdio.h>

/*
   Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
   into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
   a function for the other direction as well, converting escape sequences into the real characters.
*/

int unescape(char s[], char t[100]) {
    int i=0;
    int j=0;

    while (s[i]!='\0') {
        switch (s[i]) {
            case '\\':
                if (s[i + 1] == 'n') {
                    t[j++] = '\n';
                } else if (s[i + 1] == 't') {
                    t[j++] = '\t';
                }

                break;
        }

        t[j++] = s[i++];
     }

    t[j] = '\0';

    return 0;
}

int escape(char s[], char t[100]) {
    int i=0;
    int j=0;

    while (s[i]!='\0') {
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
        }

        t[j++] = s[i++];
     }

    t[j] = '\0';

    return 0;
}

int main(void) {
    char s[] = "O show vai... começar\ttarara\n";
    char t[100];

    unescape(s, t);
    printf("%s\n", t);

    return 0;
}
