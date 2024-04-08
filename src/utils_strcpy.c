char *
utils_strcpy(char * restrict dest, const char * restrict src)
{
    while (*src) {
        *(dest++) = *(src++);
    }
    *(dest) = 0;

    return (dest);
}
