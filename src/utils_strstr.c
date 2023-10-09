#include "../include/utils.h"

char *
utils_strstr(char *haystack, char *needle)
{
	if (*(needle) == 0) {
		return (haystack);
	}
	size_t i = 0;
	size_t j;
	while (*(haystack + i)) {
		if (*(haystack + i) != *(needle)) {
			i++;
		} else {
			j = 0;
			while (*(needle + j) == *(haystack + i) && *(needle + j) != 0) {
				i++;
				j++;
			}
			if (*(needle + j) == 0) {
				return (haystack + i - j);
			} else {
				continue ;
			}
		}
	}
	return (NULL);
}
