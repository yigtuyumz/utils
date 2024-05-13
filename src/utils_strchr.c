#include "../include/utils.h"

char *
utils_strchr(const char *str, int val)
{
    while (*(str)) {
        if (*(str) == (char) val) {
            return ((char *) str);
        }
        str++;
    }
    return (NULL);
}

