#include "../include/utils.h"

char *
utils_strncpy(char * restrict dest, const char * restrict src, size_t n)
{
    size_t i = 0;
    while (i < n && *(src + i)) {
        *(dest + i) = *(src + i);
        i++;
    }

    while (i < n) {
        *(dest + i) = 0;
        i++;
    }

    return (dest);
}

