#include "../include/utils.h"

int
utils_strcmp(const char *a, const char *b)
{
    size_t i = 0;
    while (*(a + i) && (*(a + i) - *(b + i) == 0)) {
        i++;
    }

    return (*(a + i) - *(b + i));
}
