#include "../include/utils.h"

void
utils_putstr(int fd, const char *str)
{
    write(fd, str, utils_strlen(str));
}

