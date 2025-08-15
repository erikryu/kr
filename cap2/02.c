#include <stdio.h>

int main(void)
{
    int c = 0;
    int i = 0;
    char string[100];
    
    while((c=getchar())!='\n')
    {
        if (i<=100-1)
            string[i] = c;

        ++i;
    }

    string[++i] = '\0';
    printf("%s\n", string);
}
