/* 6.11 練習問題
 * 問題 tabが来たら \tを、LFが来たら$LFを出すcatにする。
*/

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
			if (c == 9) { // tabが来たら
				putchar(92); // \ を出す(ascii表から番号が取れる)
				putchar(116); // t を出す(ascii表から番号が取れる)
				continue;
			}
			if (c == 10) putchar(36); // \n がきたら $ を出す(ascii表から番号が取れる)
			if (putchar(c) < 0) exit(1);
		}
		fclose(f);
	}
	exit(0);
}


