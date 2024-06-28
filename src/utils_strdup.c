#include "../include/utils.h"
#include <malloc.h>

char *
utils_strdup(const char *str)
{
    char *ret_str = (char *) malloc(utils_strlen(str) + 1);

    if (ret_str == NULL) {
        return (NULL);
    }

    size_t counter = 0;

    while (*(str + counter)) {
      *(ret_str + counter) = *(str + counter);
      counter++;
    }

    *(ret_str + counter) = 0;

    return (ret_str);
}

