#include "../include/utils.h"

int
utils_atoi(const char *nbr)
{
    int sign = 0;
    int nb = 0;

    while (((*nbr < 48)                          || \
            (*nbr > 57)) && (utils_isspace(*nbr) || \
            (*nbr == '-')                        || \
            (*nbr == '+'))) {
                if (*nbr == '-') {
                    sign++;
                } else if (*nbr == '+') {
                    sign--;
                }
                nbr++;
    }

    while (*(nbr) && (*(nbr) >= 48 && *(nbr) <= 57)) {
        nb = (nb * 10) + (*nbr - 48);
        nbr++;
    }

    if (sign > 0) {
        return (-nb);
    }
    return (nb);
}

