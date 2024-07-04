#include "../include/utils.h"
#include <malloc.h>

char *
utils_strndup(const char *str, size_t len)
{
    char *ret_str = (char *) malloc(utils_strnlen(str, len) + 1);

    if (ret_str == NULL) {
        return (NULL);
    }

    size_t counter = 0;

    while (*(str + counter) && counter < len) {
      *(ret_str + counter) = *(str + counter);
      counter++;
    }

    *(ret_str + counter) = 0;

    return (ret_str);
}

