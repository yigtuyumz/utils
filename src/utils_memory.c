#include "utils.h"

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
    unsigned char *s = dest;
    size_t k;

    if (!n) {
        return (dest);
    }

    s[0] = c;
    s[n - 1] = c;

    if (n <= 2) {
        return (dest);
    }

    s[1] = c;
    s[2] = c;
    s[n - 2] = c;
    s[n - 3] = c;

    if (n <= 6) {
        return (dest);
    }

    s[3] = c;
    s[n - 4] = c;

    if (n <= 8) {
        return (dest);
    }

    k = -(unsigned long int)s & 3;
    s += k;
    n -= k;
    n &= -4;

    while (n--) {
        *s = c;
        s++;
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
