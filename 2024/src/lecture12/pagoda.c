#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
// begin magic :)
// Adapted from https://codegolf.stackexchange.com/questions/50625/ascii-art-of-the-day-3-chinese-shrines
// THIS IS AWFUL CODE --- DON'T WRITE CODE LIKE THIS!
int d,i,w;
char s[1<<24];
FILE *FPTR = NULL;
int v(int i, int j){s[w-i]=".|]\\#/"[j%7];s[w+i]=".|[/#\\"[j%7];
    while(i--)s[w-i]=s[w+i]="# _-"[j/7];return 0;}
int m(int _){return v(w,13);}
int p(int _){fputs(s+1, FPTR);return fputc('\n',FPTR);}
void shrine(int l){d=l>3?3:l;m(w=l*2+6);p(v(0,0));
    for(v(0,1);i++<=l;v(i*2+2,17))p(0),v(i*2+3,7),m(p(v(i,2)));v(l+2,2);p(v(d,21));
    for(m(i=w-3);i>d+1;i-=3)v(i,15);p(v(d,8));p(v(d,15));
    v(w-3,4);m(p(v(d,19)));p(v(d+1,15));p(v(d+2,19));}
// end magic :)

int main(int argc, char const *argv[]) {
    switch (argc) {
        case 2: FPTR = stdout; break;
        case 3: FPTR = fopen(argv[2], "w"); break;
        default: printf("Usage: %s <size> [<filename>]\n", argv[0]); assert(0);
    }
    assert(FPTR);
    int n = atoi(argv[1]);
    shrine(n);
    fclose(FPTR);
    return 0;
}