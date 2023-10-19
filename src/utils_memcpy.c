#include "../include/utils.h"

void *
utils_memcpy(void *dest, const void *src, size_t n)
{
	while (n--) {
		*((char *) dest + n) = *((char *) src + n);
	}
	return (dest);
}
