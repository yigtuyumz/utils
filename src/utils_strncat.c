#include "../include/utils.h"

char *
utils_strncat(char *dest, const char *src, size_t n)
{
	size_t i = utils_strlen(dest);
	size_t j = 0;
	
	while (*(src) && j < n) {
		*(dest + i + j) = *(src + j);
		j++;
	}
	*(dest + i + j) = 0;

	return (dest);

}
