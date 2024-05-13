#include "../include/utils.h"

char *
utils_strnstr(const char *haystack, const char *needle, size_t n)
{
    if (*(needle) == 0) {
        return ((char *) haystack);
    }

    size_t i = 0;
    char *a;
    char *b;

    b = (char *) needle;
    while (*(haystack) && i < n) {
        a = (char *) haystack;
        while (*(haystack) && *(haystack) == *(needle)) {
            haystack++;
            needle++;
        }
        if (*(needle) == 0) {
            return (a);
        }
        haystack = ++a;
        needle = b;
        i++;
    }

    return (NULL);
}

