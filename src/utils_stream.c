#include "../include/utils.h"
#include <stdarg.h>

ssize_t
utils_putchar(int fd, char c)
{
    return (write(fd, &c, 1));
}

void
utils_putnbr(int fd, int nb)
{
    if (nb < 0) {
        utils_putchar(fd, '-');
        if (nb == ~0x7FFFFFFF) {
            nb = -147483648;
            utils_putchar(fd, '2');
        }
        nb *= -1;
    }

    if (nb >= 10) {
        utils_putnbr(fd, (nb / 10));
        nb = (nb % 10);
    }

    if (nb < 10) {
        utils_putchar(fd, (nb + 48));
    }
}

ssize_t
utils_putstr(int fd, const char *str)
{
    return (write(fd, str, utils_strlen(str)));
}

void
utils_vaput(int fd, char *fmt, ...)
{
    va_list ap;
    char c;
    char *s;
    int d;

    va_start(ap, fmt);

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 's') {
                s = va_arg(ap, char *);

                utils_putstr(fd, s);
            } else if (*fmt == 'd') {
                d = va_arg(ap, int);

                utils_putnbr(fd, d);
            } else if (*fmt == 'c') {
                c = va_arg(ap, int);

                utils_putchar(fd, c);
            } else {
                utils_putchar(fd, *fmt);
            }
        } else {
            utils_putchar(fd, *fmt);
        }
        fmt++;
    }
    va_end(ap);
}
