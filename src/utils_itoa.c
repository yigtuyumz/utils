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
