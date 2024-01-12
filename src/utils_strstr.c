#include "../include/utils.h"

char *
utils_strstr(const char *haystack, const char *needle)
{
	if (*(needle) == 0) {
		return ((char *) haystack);
	}

	char *h;
	char *n;

	n = (char *) needle;
	while (*haystack) {
		h = (char *) haystack;
		while (*(haystack) && *(haystack) == *(needle)) {
			haystack++;
			needle++;
		}
		if (*(needle) == 0) {
			return (h);
		}
		haystack = ++h;
		needle = n;
	}

	return (NULL);
}
