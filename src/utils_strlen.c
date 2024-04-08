#include "../include/utils.h"

size_t
utils_strlen(const char *str)
{
    size_t len = 0;
    while (*(str + len)) {
        len++;
    }

    return (len);
}
