#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int lim);
void reverseline(char line[], char nline[], int len);

int main(void)
{
    char line[MAXLINE];
    char rline[MAXLINE];
    int len;

    while ((len=getLine(line, MAXLINE)) > 0){
        printf("%d caracteres\n", len);
        reverseline(line, rline, len);
        printf("%s", rline);
    }
}

void reverseline(char line[], char rline[], int len)
{
    int i, k;
    i = 0;
    k = len - 1;

    if (line[k] == '\n')
        --k;

    for(int j=k; j>=0 && i<=k; --j, i++)
        rline[i] = line[j];

    if(len>0 && line[len - 1] == '\n') {
        rline[i] = '\n';
        ++i;
    }

    rline[i] = '\0';

    printf("%d caracteres\n", i);
}


int getLine(char line[], int lim)
{
    int c, i;

    for (i=0; i<lim - 1 && (c=getchar())!=EOF && c!='\n'; ++i)
    {
        line[i] = c;
    }
    
    if (c=='\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}
