//Programa de entabulação, onde strings de blanks são substituídas por
//tabs e espaços até o próximo tabstop.

#include <stdio.h>

#define TAB 4

int main(void)
{
    int i, c;
    int count = 0;
    int spaces = 0;

    while ((c=getchar()) != EOF)
    {
       if (c=='\n') {
           while(spaces>0) {
               putchar(' ');
               spaces--;
           }
           count = 0;
           putchar(c);
       }
       else if (c=='\t') {
           count=spaces=0;
           putchar(c);
       }
       else if (c==' ') {
           spaces++;
           count++;
           if (count>= TAB)
           {
               putchar('\t');
               spaces=count=0;
           }
       }
       else {
           while (spaces > 0)
           {
               putchar(' ');
               spaces--;
           }
           putchar(c);
           count++;
           if(count >= TAB) count = 0;
       }
    }
    return 0;
}

