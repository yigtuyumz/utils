#include "../include/utils.h"
#include <stdarg.h>

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
