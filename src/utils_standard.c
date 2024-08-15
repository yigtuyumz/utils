#include "../include/utils.h"

int
utils_atoi(const char *nbr)
{
    int sign = 0;
    int nb = 0;

    while (utils_isspace(*nbr) || *(nbr) == '-' || *(nbr) == '+') {
        if (*nbr == '-') {
            sign++;
        } else if (*nbr == '+') {
            sign--;
        }
        nbr++;
    }

    while (utils_isdigit(*nbr)) {
        nb = (nb * 10) + (*nbr - 48);
        nbr++;
    }

    if (sign > 0) {
        return (-nb);
    }

    return (nb);
}

char *
utils_itoa(int nb)
{
    static char buffer[21];
    char *p = buffer + 20;

    if (nb >= 0) {
        while (nb != 0) {
            *(--p) = '0' + (nb % 10);
            nb /= 10;
        }

        return (p);
    }

    while (nb != 0) {
        *(--p) = '0' - (nb % 10);
        nb /= 10;
    }

    *(--p) = '-';

    return (p);
}
