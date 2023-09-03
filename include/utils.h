#ifndef UTILS_H

# define UTILS_H
# include <unistd.h>

extern void utils_putchar(int fd, char c);
extern size_t utils_strlen(const char *str);
extern size_t utils_strnlen(const char *str, size_t n);
extern int utils_strcmp(const char *a, const char *b);
extern void utils_putstr(int fd, const char *str);
extern void utils_putnbr(int fd, int nb);

#endif /* UTILS_H */
