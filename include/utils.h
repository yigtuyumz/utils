#ifndef UTILS_H

# define UTILS_H
# define UTILS_MACRO 1


# include <unistd.h>


/*
 * Bu makro degeri tanimli ise ve degerine 1 atamasi yapildiysa, kutuphane
 * makro degerleri tanimli olacaktir.
 */
# ifdef UTILS_MACRO
#  if UTILS_MACRO == 1
// #   define ABS(X)           ((X) < 0x0 ? (-X) : (X))
// #   define CLEARBIT(X, N)   ((X) & (~(1 << (N))))
// #   define GETBIT(X, N)     (((X) >> (N)) & 0x1)
// #   define SETBIT(X, N)     ((X) | (0x1 << (N)))
// #   define TOGGLEBIT(X, N)  ((X) ^ (0x1 << (N)))

/*
 * `X` degerinin mutlak degerini alir.
 */
#   define ABS(X)           ((X) < 0x0 ? ((X) = (-X)) : ((X) = (X)))

/*
 * `X` degerinin `N`'inci bitini 0 yapar.
 */
#   define CLEARBIT(X, N)   ((X) = ((X) & (~(0x1 << (N)))))

/*
 * X degerinin `N`'inci bitini elde eder.
 */
#   define GETBIT(X, N)     (((X) >> (N)) & 0x1)

/*
 * X degerinin `N`'inci bitini 1 yapar.
 */
#   define SETBIT(X, N)     ((X) = ((X) | (0x1 << (N))))

/*
 * `X` degerinin `N`'inci bitinin degerini ters cevirir.
 */
#   define TOGGLEBIT(X, N)  ((X) = ((X) ^ (0x1 << (N))))
#  endif
# endif

/*
 * Bir string ifadesini, integer tipine donusturur.
 */
extern int utils_atoi(const char *nbr);

/*
 * Bir karakterin `white-space` karakter olmasi durumununda 1
 * olmamasi durumunda 0 degerini dondurur.
 * White-space karakterler:
 * ' ', '\\t', '\\n', '\\v', '\\f', '\\r'
 */
extern int utils_isspace(int c);

/*
 * Bir karakterin `hexadecimal karakter` olmasi durumunda 1
 * olmamasi durumunda 0 degerini dondurur.
 * Hexadecimal karakterler:
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,  a, b, c, d, e, f,  A, B, C, D, E, F 
 */
extern int utils_isxdigit(int c);

/*
 * Bir adet karakteri belirtilen dosya tanimlayicisina yazar.
 */
extern void utils_putchar(int fd, char c);

/*
 * Sayisal degerleri belirtilen dosya tanimlayicisina yazar.
 */
extern void utils_putnbr(int fd, int nb);

/*
 * `str` isaretcisi ile gosterilen string ifadesini belirtilen dosya
 * tanimlayicisina yazar.
 */
extern void utils_putstr(int fd, const char *str);

/*
 * `dest` ile gosterilen string ifadesinin sonuna, `src` ile gosterilen string
 * ifadesini ekler.
 */
extern char *utils_strcat(char *dest, const char *src);

/*
 * `a` isaretcisiyle gosterilen string ifadesini
 * `b` isaretcisiyle gosterilen string ifadesi ile karsilastirir.
 * iki string ifadesinin ASCII farkini dondurur. dolayisiyla karsilastirilan
 * ifadeler denk ise 0, degil ise farkli olduklari karakterin ASCII
 * farkini dondurur.
 */
extern int utils_strcmp(const char *a, const char *b);

/*
 * `src` ile isaret edilen string ifadesini, `dest` ile isaret edilen string
 * ifadesine kopyalar.
 */
extern char *utils_strcpy(char * restrict dest, const char * restrict src);

/*
 * String'in kac karakterden olustugunu dondurur.
 */
extern size_t utils_strlen(const char *str);

/*
 * `dest` ile gosterilen string ifadesinin sonuna, `src` ile gosterilen string
 * ifadesinin ilk `n` karakterini ekler.
 */
extern char *utils_strncat(char *dest, const char *src, size_t n);

/*
 * en fazla `n` adet karakter olmak uzere, `a` isaretcisi ile gosterilen string
 * ifadesini, `b` isaretcisi ile gosterilen string ifadesiyle karsilastirir.
 * iki string ifadesinin ASCII farkini dondurur. dolayisiyla karsilastirilan
 * ifadeler denk ise 0, degil ise farkli olduklari karakterin ASCII
 * farkini dondurur.
 */
extern int utils_strncmp(const char *a, const char *b, size_t n);

/*
 * en fazla `n` adet karakter olmak uzere, `src` ile isaret edilen string
 * ifadesinin n adet karakterini `dest` ile isaret edilen string ifadesine
 * kopyalar. eger `n` degeri src ifadesinin uzunlugundan kucuk ise,
 * dest icerisinde src ifadesinin uzunlugu kadar yer ayirip, n kadar karakteri
 * bu yere kopyaladiktan sonra kalan kisimi '\0' ile doldurur.
 * eger `n` degeri `src` stringinin uzunlugundan buyukse veya esit ise,
 * `src`'yi dest icerisine oldugu gibi kopyalar. (sonuna NULL ekleyerek)
 */
extern char *utils_strncpy(char * restrict dest, const char * restrict src, size_t n);

/*
 * String'in n degerine kadar kac karakterden olustugunu dondurur.
 */
extern size_t utils_strnlen(const char *str, size_t n);

/*
 * `haystack` ile gosterilen string ifadesinde, `needle` ile gosterilen string
 * ifadesini arar. eger eslesme var ise, eslesmenin basladigi noktayi
 * gosteren isaretciyi dondurur. eger eslesme yok ise, NULL dondurur.
 */
extern const char *utils_strstr(const char *haystack, const char *needle);

#endif /* UTILS_H */
