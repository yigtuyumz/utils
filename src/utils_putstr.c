#include "../include/utils.h"

/*
 * str isaretcisi ile gosterilen string ifadesini belirtilen dosya
 * tanimlayicisina yazar.
 */
void
utils_putstr(int fd, const char *str)
{
	write(fd, str, utils_strlen(str));
}
