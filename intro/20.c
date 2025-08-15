//Programa de destabulação de linhas

#include <stdio.h>

#define TAB 4

int main(void)
{
    int i, c;
    int count = 0;

    while ((c=getchar()) != EOF)
    {
       if (c=='\n') {
           count = 0;
           putchar(c);
       } else if (c=='\t') {
           for (i=0; i<TAB-count; i++)
               putchar(' ');
           count=0;
       } else {
           putchar(c);
           count++;
           if (count>=TAB) count=0;
       }

    }
}

