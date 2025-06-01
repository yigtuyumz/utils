#include "utils.h"

int
utils_isalnum(int val)
{
    if (utils_isalpha(val) || utils_isdigit(val)) {
        return (1);
    }

    return (0);
}

int
utils_isalpha(int val)
{
    if (utils_isupper(val) || utils_islower(val)) {
        return (1);
    }

    return (0);
}

int
utils_isascii(int val)
{
    unsigned char c = val;

    if (c <= 127) {
        return (1);
    }

    return (0);
}

int
utils_isblank(int val)
{
    unsigned char c = val;

    if (c == '\t' || c == ' ') {
        return (1);
    }

    return (0);
}

int
utils_iscntrl(int val)
{
    unsigned char c = val;

    if (c == 127 || c <= 31) {
        return (1);
    }

    return (0);
}

int
utils_isdigit(int val)
{
    unsigned char c = val;

    if (c >= '0' && c <= '9') {
        return (1);
    }

    return (0);
}

int
utils_isgraph(int val)
{
    unsigned char c = val;

    if (c >= 33 && c <= 126) {
        return (1);
    }

    return (0);
}

int
utils_islower(int val)
{
    unsigned char c = val;

    if (c >= 'a' && c <= 'z') {
        return (1);
    }

    return (0);
}

int
utils_ispowtwo(unsigned int x)
{
    return ((x & (x - 1)) == 0);
}

int
utils_isprime(unsigned int nb)
{
    if (nb <= 1) {
        return (0);
    }

    if (nb <= 3) {
        return (1);
    }

    if (nb % 2 == 0 || nb % 3 == 0) {
        return (0);
    }

    unsigned int i = 5;

    while ((i * i) <= nb) {
        if (((nb % i) == 0) || (nb % (i + 2) == 0)) {
            return (0);
        }

        i += 6;
    }

    return (1);
}

int
utils_isprint(int val)
{
    unsigned char c = val;

    if (c >= 32 && c <= 126) {
        return (1);
    }

    return (0);
}

int
utils_ispunct(int val)
{
    unsigned char c = val;

    if ((c >= 33 && c <= 47) ||
        (c >= 58 && c <= 64) ||
        (c >= 91 && c <= 96) || (c >= 123 && c <= 126)) {
        return (1);
    }

    return (0);
}

int
utils_isspace(int val)
{
    unsigned char c = val;

    if (c == 32 || (c >= 9 && c <= 13)) {
        return (1);
    }

    return (0);
}

int
utils_isupper(int val)
{
    unsigned char c = val;

    if (c >= 'A' && c <= 'Z') {
        return (1);
    }

    return (0);
}

int
utils_isxdigit(int val)
{
    unsigned char c = val;

    if ((c >= '0' && c <= '9') ||
        (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F')) {
        return (1);
    }

    return (0);
}
