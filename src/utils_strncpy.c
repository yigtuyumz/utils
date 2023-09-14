#include "../include/utils.h"

char *
utils_strncpy(char * restrict dst, const char * restrict src, size_t len)
{
	size_t i = 0;
	while (i < len && *(src + i)) {
		*(dst + i) = *(src + i);
		i++;
	}
	while (i < len) {
		*(dst + i) = 0;
		i++;
	}

	return (dst);
}
