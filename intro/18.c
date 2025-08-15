#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int lim);
void removeTabBlanks(char line[], char nline[]);

int main(void)
{
    char line[MAXLINE];
    char rline[MAXLINE];
    int len;

    while ((len=getLine(line, MAXLINE) > 0)){
        removeTabBlanks(line, rline);
        printf("%s", rline);
    }
}

void removeTabBlanks(char line[], char rline[])
{
    int i, k;

    i=k=0;
    while (line[i]!='\0'  && k<MAXLINE-1){
        if (line[i]!=' ' &&  line[i]!='\t'){
            rline[k] = line[i];
            ++k;
        }

        ++i;
    }

    rline[k] = '\0';
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
