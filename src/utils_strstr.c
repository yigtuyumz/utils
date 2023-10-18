#include "../include/utils.h"
#include <stdio.h>

const char *
utils_strstr(const char *haystack, const char *needle)
{
	char *h;
	char *n;

	if (*(needle) == 0) {
		return (haystack);
	}

	n = (char *) needle;
	while (*haystack) {
		h = (char *) haystack;
		while (*(haystack) && *(haystack) == *(needle)) {
			haystack++;
			needle++;
		}	
		if (*(needle) == 0) {
			return ((const char *) h);
		}
		printf("%s\n", h);
		haystack = ++h;
		needle = n;
	}

	return (NULL);
}
