#ifndef UTILS_H

# define UTILS_H
# define _UTILS_MACRO 1

# include <unistd.h>

/*
 * _UTILS_MACRO tanimli ise ve degerine 1 atamasi yapildiysa, bitwise
 * makro ifadeleri tanimli olacaktir. `N` degeri bitin indexini belirtir.
 * Dolayisiyla sifirinci index en sagdaki bit'i elde eder.
 */
# ifdef _UTILS_MACRO
#  if _UTILS_MACRO == 1

/*
 * `X` degerini `X`in mutlak degerine esitler.
 */
#   define ABS(X)           ((X) < 0x00 ? ((X) = (-X)) : ((X) = (X)))

/*
 * `X` degerinin `N`'inci bitini 0 yapar.
 */
#   define CLEARBIT(X, N)   ((X) = ((X) & (~(0x01 << (N)))))

/*
 * X degerinin `N`'inci bitini elde eder.
 */
#   define GETBIT(X, N)     (((X) >> (N)) & 0x01)

/*
 * X degerinin `N`'inci bitini 1 yapar.
 */
#   define SETBIT(X, N)     ((X) = ((X) | (0x01 << (N))))

/*
 * `X` degerinin `N`'inci bitinin degerini ters cevirir.
 */
#   define TOGGLEBIT(X, N)  ((X) = ((X) ^ (0x01 << (N))))
#  endif /* _UTILS_MACRO == 1 */
# endif /* _UTILS_MACRO */

__BEGIN_DECLS

/*
 * Bir string ifadesini, integer tipine donusturur.
 */
int utils_atoi(const char *nbr);

/*
 * `s` ile gosterilen adresin `n` kadar byte'ina sifir degerini yazar.
 * - `n` degeri sifira esit ise, bu fonksiyon hicbir sey yapmaz.
 */
void utils_bzero(void *s, size_t n);

/*
 *
 */
int utils_constrain(int val, int min, int max);

/*
 * Ondalikli bir sayiyi, asagiya yuvarlar.
 * 0x40000000 = 0b01000000000000000000000000000000
 */
double utils_floor(double x);

/*
 *
 */
int utils_isalnum(int val);

/* 
 *
 */
int utils_isalpha(int val);

/*
 *
 */
int utils_isascii(int val);

/*
 *
 */
int utils_isblank(int val);

/*
 *
 */
int utils_iscntrl(int val);

/*
 *
 */
int utils_isdigit(int val);

/*
 *
 */
int utils_isgraph(int val);

/*
 *
 */
int utils_islower(int val);

/*
 *
 */
int utils_ispowtwo(unsigned int x);

/*
 * Bir sayinin asal olup olmama durumunu 6k+-1 teoremini kullanarak denetler.
 * - sayi asal ise `1` degil ise `0` degerini dondurur.
 */
int utils_isprime(unsigned int nb);

/*
 *
 */
int utils_isprint(int val);

/*
 *
 */
int utils_ispunct(int val);

/*
 * Bir karakterin `white-space` karakter olmasi durumununda 1
 * olmamasi durumunda 0 degerini dondurur.
 * White-space karakterler:
 * ' ', '\\t', '\\n', '\\v', '\\f', '\\r'
 */
int utils_isspace(int val);

/*
 *
 */
int utils_isupper(int val);

/*
 * Bir karakterin `hexadecimal karakter` olmasi durumunda 1
 * olmamasi durumunda 0 degerini dondurur.
 * Hexadecimal karakterler:
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,  a, b, c, d, e, f,  A, B, C, D, E, F 
 */
int utils_isxdigit(int val);

/*
 * `nb` sayisini stringe cevirir.
 * Bu string ifadesi statik olarak 21 byte kullanir. Bunun sebebi kodun daha
 * optimize olmasidir.
 */
char *utils_itoa(int nb);

/*
 * `src` ile gosterilen isaretcinin `n` byte'lik degerini `dest`'e kopyalar.
 */
void *utils_memcpy(void *dest, const void *src, size_t n);

/*
 * `dest` ile gosterilen adresin `n` kadar byte'ina `c` degerini atar.
 * `n` degeri 0'dan buyuk olmalidir.
 * `n` degeri `dest`'in uzunlugundan buyuk olmamalidir.
 */
void *utils_memset(void *dest, int c, size_t n);

/*
 * Bir adet karakteri belirtilen dosya tanimlayicisina yazar.
 * Yazilan karakter sayisini dondurur. Hata durumunda -1 dondurur.
 */
ssize_t utils_putchar(int fd, char c);

/*
 * Sayisal degerleri belirtilen dosya tanimlayicisina yazar.
 */
void utils_putnbr(int fd, int nb);

/*
 * `str` isaretcisi ile gosterilen string ifadesini belirtilen dosya
 * tanimlayicisina yazar. Yazilan karakter sayisini dondurur. Hata durumunda
 * -1 dondurur.
 */
ssize_t utils_putstr(int fd, const char *str);

/*
 *
 */
int utils_sq(void *nb);

/*
 * `dest` ile gosterilen string ifadesinin sonuna, `src` ile gosterilen string
 * ifadesini ekler.
 */
char *utils_strcat(char *dest, const char *src);

/*
 * `str` isaretcisi ile gosterilen string ifadesinde `val` degeri ile eslesen
 * ilk karakterin adresini dondurur.
 * - eslesme yoksa `NULL` degerini dondurur.
 */
char *utils_strchr(const char *str, int val);

/*
 * `a` isaretcisiyle gosterilen string ifadesini
 * `b` isaretcisiyle gosterilen string ifadesi ile karsilastirir.
 * iki string ifadesinin ASCII farkini dondurur. dolayisiyla karsilastirilan
 * ifadeler denk ise 0, degil ise farkli olduklari karakterin ASCII
 * farkini dondurur.
 */
int utils_strcmp(const char *a, const char *b);

/*
 * `src` ile isaret edilen string ifadesini, `dest` ile isaret edilen string
 * ifadesine kopyalar.
 */
char *utils_strcpy(char *restrict dest, const char *restrict src);

/*
 * `str` ile isaret edilen string ifadesini, yeni bir alana kopyalar. kopyalanan
 * yeni ifade, '\0' ile sonlandirilir.
 * - malloc ile yer ayirma islemi basarisiz olursa `NULL` degeri dondurur.
 */
char *utils_strdup(const char *str);

/*
 * `str` ile gosterilen string ifadesinin kac karakterden olustugunu dondurur.
 */
size_t utils_strlen(const char *str);

/*
 * `dest` ile gosterilen string ifadesinin sonuna, `src` ile gosterilen string
 * ifadesinin ilk `n` karakterini ekler.
 */
char *utils_strncat(char *dest, const char *src, size_t n);

/*
 * en fazla `n` adet karakter olmak uzere, `a` isaretcisi ile gosterilen string
 * ifadesini, `b` isaretcisi ile gosterilen string ifadesiyle karsilastirir.
 * iki string ifadesinin ASCII farkini dondurur. dolayisiyla karsilastirilan
 * ifadeler denk ise 0, degil ise farkli olduklari karakterin ASCII
 * farkini dondurur.
 */
int utils_strncmp(const char *a, const char *b, size_t n);

/*
 * en fazla `n` adet karakter olmak uzere, `src` ile isaret edilen string
 * ifadesinin n adet karakterini `dest` ile isaret edilen string ifadesine
 * kopyalar.
 * - `n` degeri src ifadesinin uzunlugundan kucuk ise, dest icerisinde src
 * ifadesinin uzunlugu kadar yer ayirip, n kadar karakteri bu yere kopyaladiktan
 * sonra kalan kisimi '\0' ile doldurur.
 * - `n` degeri `src` stringinin uzunlugundan buyukse veya esit ise,
 * `src`'yi dest icerisine oldugu gibi kopyalar. (sonuna NULL ekleyerek)
 */
char *utils_strncpy(char *restrict dest, const char *restrict src, size_t n);

/*
 * `str` isaretcisi ile gosterilen ifadenin en fazla `n` adet karakterini yeni
 * bir alana kopyalar.
 * - `n` ifadesi, `str` ifadesinin uzunlugundan buyukse, `str` ifadesinin butun
 * karakterlerini kopyalar. kopyalanan yeni ifade, '\0' ile sonlandirilir.
 * - malloc ile yer ayirma islemi basarisiz olursa `NULL` degeri dondurur.
 */
char *utils_strndup(const char *str, size_t len);

/*
 * `str` ile gosterilen string ifadesinin `n` degerine kadar kac karakterden
 * olustugunu dondurur.
 */
size_t utils_strnlen(const char *str, size_t n);

/*
 * `haystack` ile isaret edilen string ifadesinin en fazla `n` adet karakterinde
 * `needle` ile isaret edilen string ifadesini arar.
 * - eslesme var ise, eslesmenin basladigi noktayi gosteren isaretciyi dondurur.
 * - eslesmeyok veya `n` degeri yeterince buyuk degil ise, NULL degeri dondurur.
 */
char *utils_strnstr(const char *haystack, const char *needle, size_t n);

/*
 * `str` isaretcisi ile gosterilen string ifadesinde `val` degeri ile eslesen
 * son karakterin adresini dondurur.
 * - eslesme yok ise `NULL` degerini dondurur.
 */
char *utils_strrchr(const char *str, int val);

/*
 * `haystack` ile gosterilen string ifadesinde, `needle` ile gosterilen string
 * ifadesini arar. 
 * - eslesme var ise, eslesmenin basladigi noktayi gosteren isaretciyi dondurur.
 * - eslesme yok ise, NULL dondurur.
 */
char *utils_strstr(const char *haystack, const char *needle);

/*
 * `a` isaretcisi ile gosterilen adresin `n` byte'lik degerini, `b` isaretcisi
 * ile gosterilen adresin `n` byte'lik degeri ile degistirir.
 */
void utils_swapn(void *a, void *b, size_t n);

/*
 * Degisken sayida arguman alabilen, dosya tanimlayicisina 'format' ile
 * belirtilen ifadeyi yazan fonksiyon.
 * Gecerli formatlar:
 *
 * - `%c` - character : utils_putchar() kullanarak ekrana belirtilen
 * karakteri yazar.
 * - `%s` - string    : utils_putstr() kullanarak ekrana belirtilen string
 * ifadesini yazar.
 * - `%d` - integer   : utils_putnbr() kullanarak ekrana belirtilen int
 * degerini yazar.
 */
void utils_vaput(int fd, char *fmt, ...);

__END_DECLS
#endif /* UTILS_H */
