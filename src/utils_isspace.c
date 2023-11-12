int
utils_isspace(int c)
{
    if ((c == ' ')  || \
        (c == '\t') || \
        (c == '\n') || \
        (c == '\v') || \
        (c == '\f') || \
        (c == '\r')) {
                    return (1);
                }
	return (0);
}
