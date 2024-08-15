#include "../include/utils.h"

void
utils_bzero(void *s, size_t n)
{
    while (n--) {
        *((unsigned char *) s + n) = 0;
    }
}

void *
utils_memcpy(void *dest, const void *src, size_t n)
{
    while (n--) {
        *((unsigned char *) dest + n) = *((unsigned char *) src + n);
    }

    return (dest);
}

void *
utils_memset(void *dest, int c, size_t n)
{
    while (n--) {
        *((unsigned char *) dest + n) = c;
    }

    return (dest);
}

void
utils_swapn(void *a, void *b, size_t n)
{
    while (n--) {
        *((unsigned char *) a + n) =
            *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
        *((unsigned char *) b + n) =
            *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
        *((unsigned char *) a + n) =
            *((unsigned char *) a + n) ^ *((unsigned char *) b + n);
    }
}
