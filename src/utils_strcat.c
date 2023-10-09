#include "../include/utils.h"

char *
utils_strcat(char *dest, const char *src)
{
	size_t i = utils_strlen(dest);

	while (*(src)) {
		*(dest + i++) = *(src++);
	}
	*(dest + i) = 0;

	return (dest);
}
