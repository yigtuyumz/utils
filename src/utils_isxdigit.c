int
utils_isxdigit(int c)
{
    if ((c <= 57 && c >= 48)  || \
        (c >= 97 && c <= 102) || \
        (c >= 65 && c <= 70)) {
                return (1);
            }
    return (0);
}
