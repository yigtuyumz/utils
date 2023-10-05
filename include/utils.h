#ifndef UTILS_H

# define UTILS_H
# include <unistd.h>

/*
 * Bir adet karakteri belirtilen dosya tanimlayicisina yazar.
 */
extern void utils_putchar(int fd, char c);

/*
 * Sayisal degerleri ekrana yazar.
 */
extern void utils_putnbr(int fd, int nb);

/*
 * `str` isaretcisi ile gosterilen string ifadesini belirtilen dosya
 * tanimlayicisina yazar.
 */
extern void utils_putstr(int fd, const char *str);

/*
 * Eger `a` isaretcisi ile gosterilen string ifadesinin icerisindeki her bir
 * karakter, `b` isaretcisi ile gosterilen string ifadesinin icerisindeki
 * karaklerler ile sirasiyla esit ise 1, degil ise 0 dondurur.
 */
extern int utils_strcmp(const char *a, const char *b);

/*
 * `src` ile isaret edilen string ifadesini, `dst` ile isaret edilen string
 * ifadesine kopyalar.
 */
extern char * utils_strcpy(char * restrict dst, const char * restrict src);

/*
 * String'in kac karakterden olustugunu dondurur.
 */
extern size_t utils_strlen(const char *str);

/*
 * en fazla `n` adet karakter olmak uzere, `src` ile isaret edilen string
 * ifadesinin n adet karakterini `dst` ile isaret edilen string ifadesine
 * kopyalar. eger `n` degeri src ifadesinin uzunlugundan kucuk ise,
 * dst icerisinde src ifadesinin uzunlugu kadar yer ayirip, n kadar karakteri
 * bu yere kopyaladiktan sonra kalan kisimi '\0' ile doldurur.
 * eger `n` degeri `src` stringinin uzunlugundan buyukse veya esit ise,
 * `src`'yi dst icerisine oldugu gibi kopyalar. (sonuna NULL ekleyerek)
 */
extern char * utils_strncpy(char * restrict dst, const char * restrict src, size_t len);

/*
 * String'in n degerine kadar kac karakterden olustugunu dondurur.
 */
extern size_t utils_strnlen(const char *str, size_t n);

#endif /* UTILS_H */
