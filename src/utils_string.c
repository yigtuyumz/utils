#include "utils.h"
#include <malloc.h>

char *
utils_strcat(char *dest, const char *src)
{
    size_t i = utils_strlen(dest);

    while (*(src)) {
        *(dest + i++) = *(src++);
    }
    *(dest + i) = 0;

    return (dest);
}

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

int
utils_strcmp(const char *a, const char *b)
{
    size_t i = 0;

    while (*(a + i) && (*(a + i) - *(b + i) == 0)) {
        i++;
    }

    return (*(a + i) - *(b + i));
}

char *
utils_strcpy(char *restrict dest, const char *restrict src)
{
    while (*src) {
        *(dest++) = *(src++);
    }
    *(dest) = 0;

    return (dest);
}

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

size_t
utils_strlen(const char *str)
{
    size_t len = 0;

    while (*(str + len)) {
        len++;
    }

    return (len);
}

char *
utils_strncat(char *dest, const char *src, size_t n)
{
    size_t i = utils_strlen(dest);
    size_t j = 0;

    while (*(src) && j < n) {
        *(dest + i + j) = *(src + j);
        j++;
    }

    *(dest + i + j) = 0;
    return (dest);
}

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

char *
utils_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
    size_t i = 0;

    while (i < n && *(src + i)) {
        *(dest + i) = *(src + i);
        i++;
    }

    while (i < n) {
        *(dest + i) = 0;
        i++;
    }

    return (dest);
}

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

size_t
utils_strnlen(const char *str, size_t n)
{
    size_t len = 0;

    while (*(str + len) && len < n) {
        len++;
    }

    return (len);
}

char *
utils_strnstr(const char *haystack, const char *needle, size_t n)
{
    if (*(needle) == 0) {
        return ((char *) haystack);
    }

    size_t i = 0;
    char *a;
    char *b = (char *) needle;

    while (*(haystack) && i < n) {
        a = (char *) haystack;
        while (*(haystack) && *(haystack) == *(needle)) {
            haystack++;
            needle++;
        }
        if (*(needle) == 0) {
            return (a);
        }
        haystack = ++a;
        needle = b;
        i++;
    }

    return (NULL);
}

char *
utils_strrchr(const char *str, int val)
{
    char *s = ((void *) 0);

    while (*(str)) {
        if (*(str) == (char) val) {
            s = (char *) str;
        }
        str++;
    }

    return (s);
}

char *
utils_strstr(const char *haystack, const char *needle)
{
    if (*(needle) == 0) {
        return ((char *) haystack);
    }

    char *h;
    char *n = (char *) needle;

    while (*haystack) {
        h = (char *) haystack;

        while (*(haystack) && *(haystack) == *(needle)) {
            haystack++;
            needle++;
        }

        if (*(needle) == 0) {
            return (h);
        }

        haystack = ++h;
        needle = n;
    }

    return (((void *) 0));
}
