#include <stdio.h>
#include <string.h>

#define MAX 100

int gline(char s[], int lim);
int rightmostOccurrence(char in[], char search[]);

char pattern[] = "ia";

int main(void)
{
    int len = 0;
    int rindex;
    char s[MAX];

    while((len = gline(s, MAX))>0)
        if (rightmostOccurrence(s, pattern) >= 0)
        {
            printf("%s", s);

            if(s[len-1]!='\n')
                putchar('\n');
        }

    return len;
}

int gline(char s[], int lim)
{
    int i, c;

    i = 0;
    for (;lim > 0  && (c=getchar())!=EOF && c!='\n'; --lim)
        s[i++] = c;
    if (c=='\n')
        s[i++] = c;

    s[i++] = '\0';
    
    return i;
}

int rightmostOccurrence(char s[], char t[])
{
    int i, j, k;
    int len_t = strlen(t);

    for (i=strlen(s); i>=0; i--)
    {
        for (j=i, k=len_t - 1; k>=0  && s[j]==t[k]; j--, k--)
            ;
        if (k>0)
        {
            printf("A última ocorrência está em %d.\n", i - (len_t - 1));
            return i - (len_t - 1);
        }
    }

    return -1;
}

/*
int strindex(char s[], char t[])
{
    int i, j, k;

    for(i=0; s[i] != '\0'; i++)
    {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k>0 && t[k] == '\0')
            return i;
    }

    return -1;
}
*/

