#include "../include/utils.h"

char *
utils_strrchr(const char *str, int val)
{
    char *s = NULL;
    while (*(str)) {
        if (*(str) == (char) val) {
            s = (char *) str;
        }
        str++;
    }
    return (s);
}
