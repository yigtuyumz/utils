#include "../include/utils.h"

char *
utils_strcpy(char * restrict dst, const char * restrict src)
{
	while (*src) {
		*(dst++) = *(src++);
	}
	*dst = 0;

	return (dst);
}
