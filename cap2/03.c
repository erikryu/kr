#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 8

int pot(int a, int b);
int htoi(char s[]);

int main(void)
{
    char hx[] = "0XFFA5\n\0";

    htoi(hx);
}

int htoi(char s[]) {
    int i, j, index, sum=0;
    int c_lenght = strlen(s);

    for (i=0; i<c_lenght; ++i) {
        if (s[i] == '\n')
            j = i - 1;

        for(index=0; j > 1 && isxdigit(s[j])!=0; ++index, --j)
        { 
            int num;
            int p = pot(16, index);
            int g = sum;

            if (s[j]>='A' && s[j]<='Z') {
                num = 10 + (s[j] - 'A');
                sum = g + (num*p);
                printf("a soma de %d + (%d * %d) = %d", g, num, p, sum); 
            }

            if (s[j]>='0' && s[j]<='9') {
                num = s[j] - '0';
                sum = g + (num*p);
                printf("a soma de %d + (%d * %d) = %d", g, num, p, sum); 
            }

            if (s[j]>='a' && s[j]<='z') {
                num = 10 + (s[j] - 'a');
                sum = g + (num*p);
                printf("a soma de %d + (%d * %d) = %d", g, num, p, sum); 
            }



            printf("\n");
            printf("%d-%d ", index, j);
            printf("%d\n", sum);
        }
    }

    printf("\n%d\n%d\n", index, sum);

    return 0;
}

int pot(int a, int b) {
    int i = 0;
    int result=1;

    while (i < b) {
        result *= a;
        ++i;
    }

    return result;
}
