#include "../include/utils.h"

/*
 * Bir adet karakteri belirtilen dosya tanimlayicisina yazar.
 */
void
utils_putchar(int fd, char c)
{
	write(fd, &c, 1);
}
