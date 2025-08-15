#include <stdio.h>

int main(void){
    int c;
    int ca = 0;

    while ((c=getchar())!=EOF){
        if ((c==ca) && (ca==' ')){
            c=0;
        }

        if ((ca==0) && (c==' ')){
            c=0;
        }

        putchar(c);
        ca = c;
    }
}
