#include "../include/utils.h"

int
utils_strcmp(const char *a, const char *b)
{
	size_t i = 0;
	while (*(a + i) == *(b + i) && \
			(*(a + i) != '\0' || *(b + i) != '\0')) {
		i++;
	}
	
	if (*(a + i) == '\0') {
		return (1);
	}
	return (0);
}
