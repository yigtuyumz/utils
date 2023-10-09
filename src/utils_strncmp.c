#include "../include/utils.h"

int
utils_strncmp(const char *a, const char *b, size_t n)
{
	size_t i = 0;
	while (*(a + i) && (*(a + i) - *(b + i) == 0) && i <= n) {
		i++;
	}

	return (*(a + i) - *(b + i));
}
