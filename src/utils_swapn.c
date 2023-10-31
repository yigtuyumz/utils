#include "../include/utils.h"

void
utils_swapn(void *a, void *b, size_t n)
{
	while (n--) {
		*((unsigned char *) a + n) = *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
		*((unsigned char *) b + n) = *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
		*((unsigned char *) a + n) = *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
	}
}
