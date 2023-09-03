#include "../include/utils.h"

/*
 * String'in kac karakterden olustugunu dondurur.
 */
size_t
utils_strlen(const char *str)
{
	size_t len = 0;
	while (*(str + len)) {
		len++;
	}

	return (len);
}
