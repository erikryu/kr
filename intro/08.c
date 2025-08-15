#include <stdio.h>

int main(void)
{
    int bcount, tcount, ncount, c;

    bcount = tcount = ncount = 0;
    while ((c=getchar())!=EOF){
		if (c==' '){
			++bcount;
			}
		if (c=='\t'){
			++tcount;
			}
		if (c=='\n'){
			++ncount;
			}
	}
    
    printf("Blanks: %d\nTabs: %d\nLines: %d\n", bcount, tcount, ncount);
}
