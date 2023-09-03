#include "../include/utils.h"

/*
 * String'in n degerine kadar kac karakterden olustugunu dondurur.
 */
size_t
utils_strnlen(const char *str, size_t n)
{
	size_t len = 0;
	while (*(str + len) && len < n) {
		len++;
	}

	return (len);
}
