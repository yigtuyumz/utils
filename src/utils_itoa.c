char *
utils_itoa(int nb)
{
    // save buffer address between function calls with static keyword.
    static char buffer[21]; // 19 int max, 1 for sign, 1 for null terminator.
    char *p = buffer + 20;  // points to the end of buffer (null terminator.)

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