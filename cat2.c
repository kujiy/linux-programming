#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int i;
    for (i=1; i<argc; i++) {
        FILE *f;
        int c;
        f = fopen(argv[i], "r");
        if(!f) {
            perror(argv[i]);
            exit(1);
        }
        while ((c = fgetc(f)) != EOF) {  // EOFに当たるまでfgetcし続ける
            // if (putchar(c) < 0) exit(1);
            putchar(c);
        }
        fclose(f);
    }
    exit(0);
}
