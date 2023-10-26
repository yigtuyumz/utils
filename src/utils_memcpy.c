#include "../include/utils.h"

void *
utils_memcpy(void *dest, const void *src, size_t n)
{
	while (n--) {
		*((unsigned char *) dest + n) = *((unsigned char *) src + n);
	}
	return (dest);
}
