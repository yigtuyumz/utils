#include "../include/utils.h"

size_t
utils_strnlen(const char *str, size_t n)
{
    size_t len = 0;
    while (*(str + len) && len < n) {
        len++;
    }

    return (len);
}

