#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max=0;
    while ((len=getLine(line, MAXLINE)) > 0)
    {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
        printf ("Lenght = %d, Line = %s\n", max, longest);

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i, k = 0;
    
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c=='\n') {
        s[i] = c;
        ++i;
    } else
    {
        while ((c=getchar()) != EOF && c!='\n')
            ++k;
    }

    s[i] = '\0';

    return i + k;
}

void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
