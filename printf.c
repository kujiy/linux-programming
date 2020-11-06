#include <stdio.h>

int
main(int argc, char *argv[])
{

	printf("%010x\n", 77)  ;   // 000000004d
	printf("%10s\n", "abc") ;  //             abc
	printf("%-10s\n", "abc") ;  // abc
	exit(0);
}

