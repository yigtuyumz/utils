#include "../include/utils.h"

void
utils_swapn(void *a, void *b, size_t n)
{

	unsigned char temp;

	size_t i = 0;
	while (i < n) {
		temp = *((unsigned char *) a + i);
		*((unsigned char *) a + i) = *((unsigned char *) b + i);
		*((unsigned char *) b + i) = temp;
		i++;
	}
}
