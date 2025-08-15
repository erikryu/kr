#include <stdio.h>

#define WCOUNT 10
#define WLCOUNT 10

int main(void)
{
    int c, wlcount, k;
    int count[WCOUNT];

    for (int i=0; i<WCOUNT; ++i){
        count[i] = 0;
    }

    k=0;
    while ((c=getchar())!=EOF) {
        ++wlcount;
        if (c==' ' || c=='\n'){
            count[k] = wlcount-1;
            ++k;

            wlcount=0;
        }
    }

    /*
    for (int i=0; i<WCOUNT; ++i){
        printf("%d ", count[i]);
        for(int j=0; j<count[i]; ++j){
            printf("*");
        }
        printf("\n");
    }
    */

    for (int i=WLCOUNT; i>0; --i) {
        for (int j=0; j<k; ++j) {
            if (i<=count[j]){
                printf("*");
            } else printf(" ");
        }

        printf("\n");
    }
/*
    for (int i=0; i<k; ++i){
        printf("%d\t", count[i]);
    }
    */
}
