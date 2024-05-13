#include "../include/utils.h"

void
utils_putchar(int fd, char c)
{
    write(fd, &c, 1);
}

