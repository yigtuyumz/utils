#include "../include/utils.h"

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
