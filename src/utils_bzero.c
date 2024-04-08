#include "../include/utils.h"

void
utils_bzero(void *s, size_t n)
{
    while (n--) {
        *((unsigned char *)s + n) = 0;
    }
}
