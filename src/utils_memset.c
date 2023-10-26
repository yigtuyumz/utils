#include "../include/utils.h"

void *
utils_memset(void *dest, int c, size_t n)
{
	while (n--) {
		*((unsigned char *)dest + n) = c;
	}
	return (dest);
}
