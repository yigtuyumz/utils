# **Utilites for C**

_libutils_ is a dynamic C library of the functions which i am using mostly.

## **_Folder Structure_**
- ### *./include/*
	Contains header file(s).
	```c
	/* utils.h */

	/* if _UTILS_MACRO */
	#define    ABS(X)           ((X) < 0x00 ? ((X) = (-X)) : ((X) = (X)))
	#define    CLEARBIT(X, N)   ((X) = ((X) & (~(0x01 << (N)))))
	#define    GETBIT(X, N)     (((X) >> (N)) & 0x01)
	#define    SETBIT(X, N)     ((X) = ((X) | (0x01 << (N))))
	#define    TOGGLEBIT(X, N)  ((X) = ((X) ^ (0x01 << (N))))
	/* endif _UTILS_MACRO */

	int
	utils_atoi(const char *nbr);

	void
	utils_bzero(void *s, size_t n);

	int
	utils_constrain(int val, int min, int max);

	double
	utils_floor(double x);

	int
	utils_isalnum(int val);

	int
	utils_isalpha(int val);

	int
	utils_isascii(int val);

	int
	utils_isblank(int val);

	int
	utils_iscntrl(int val);

	int
	utils_isdigit(int val);

	int
	utils_isgraph(int val);

	int
	utils_islower(int val);

	int
	utils_isprime(unsigned int nb);

	int
	utils_isprint(int val);

	int
	utils_ispunct(int val);

	int
	utils_isspace(int val);

	int
	utils_isupper(int val);

	int
	utils_isxdigit(int val);

	char *
	utils_itoa(int nb);

	void *
	utils_memcpy(void *dest, const void *src, size_t n);

	void *
	utils_memset(void *dest, int c, size_t n);

	ssize_t
	utils_putchar(int fd, char c);

	void
	utils_putnbr(int fd, int nb);

	ssize_t
	utils_putstr(int fd, const char *str);

	int
	utils_sq(void *nb);

	char *
	utils_strcat(char *dest, const char *src);

	char *
	utils_strchr(const char *str, int val);

	int
	utils_strcmp(const char *a, const char *b);

	char *
	utils_strcpy(char *restrict dest, const char *restrict src);

	char *
	utils_strdup(const char *str);

	size_t
	utils_strlen(const char *str);

	char *
	utils_strncat(char *dest, const char *src, size_t n);

	int 
	utils_strncmp(const char *a, const char *b, size_t n);

	char *
	utils_strncpy(char *restrict dest, const char *restrict src, size_t n);

	char *
	utils_strndup(const char *str, size_t len);

	size_t
	utils_strnlen(const char *str, size_t n);

	char *
	utils_strnstr(const char *haystack, const char *needle, size_t n);

	char *
	utils_strrchr(const char *str, int val);

	char *
	utils_strstr(const char *haystack, const char *needle);

	void
	utils_swapn(void *a, void *b, size_t n);

	void
	utils_vaput(int fd, char *fmt, ...);
	/* end of utils.h */
	```

	```makefile
	# include libutils.so file to the project
	FLAGS = -L/path/to/so/file -llibnamewithoutextension -Wl,-rpath=/path/to/so/file
	```
- ### *./tests/*
	Test environment.
	Contains files related to test cases.
- ### *./src/*
	Contains source files named same as the function name.


# **Build**
- Run `./autogen` to create Makefile, then use `make` to build the library.
Available targets for make:

#### <u>all</u>
Build programs, libraries, documentation, etc. (same as make).
#### <u>install</u>
Install what needs to be installed, copying the files from the package's tree to system-wide directories.
#### <u>install-strip</u>
Same as make install, then strip debugging symbols. Some users like to trade space for useful bug reports...
#### <u>uninstall</u>
The opposite of make install: erase the installed files. (This needs to be run from the same build tree that was installed.)
#### <u>clean</u>
Erase from the build tree the files built by make all.
#### <u>distclean</u>
Additionally erase anything ./configure created.
#### <u>check</u>
Run the test suite, if any.
#### <u>installcheck</u>
Check the installed programs or libraries, if supported.
#### <u>dist</u>
Recreate package-version.tar.gz from all the source files.

## **TODO's**
- Generate autotools build system.
- Create an extra header file for macros and constants **(?)**
- Rewrite function definitions in English.
- indent may need extra flags in the future.
- Write a callback function, which takes variadic arguments,
and identify types of these arguments in that function.
- Write a better README.

## **Tools**
- [Binary to Decimal Converter](https://www.rapidtables.com/convert/number/binary-to-decimal.html)
- [Word Sort](https://www.browserling.com/tools/word-sort)
- [GNU indent](https://www.gnu.org/software/indent/manual/dir.html#Top)


**_See Also_**
- [Knuth–Morris–Pratt Algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)
- [Single Precision Floating-point Format](https://en.wikipedia.org/wiki/Single-precision_floating-point_format)
- [Double Precision Floating-point Format](https://en.wikipedia.org/wiki/Double-precision_floating-point_format)
- [Race Condition](https://en.wikipedia.org/wiki/Race_condition#In_software)
- [Prime Numbers 6k+-1 Theorem](https://crypto.stackexchange.com/a/72352)

