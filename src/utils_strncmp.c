#include "../include/utils.h"

int
utils_strncmp(const char *a, const char *b, size_t n)
{
    size_t i = 0;
    while (*(a + i) && (*(a + i) == *(b + i)) && i < n) {
        i++;
    }

    if (i == n) {
        return (0);
    }

    return (*(a + i) - *(b + i));
}

