#include <error.h>
{
	errno = 0;
	if (fputs(buf, f) == EOF) {
		if (errno != 0) {
			// error処理
		}
	}
}

