#include <stdio.h>

int main(void){
    int c;
   
   for (int i=0; (c=getchar()) && c!=EOF; ++i)
   {

        if (c=='\t'){
            putchar('\\');
            c='t';
        }
        if (c=='\b'){
            putchar('\\');
            c='b';
        }
        if (c=='\\'){
          putchar('\\');
          c='\\';
      }



      putchar(c);
   } 
}
