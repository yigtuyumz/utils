# **Utilites for C**

_libutils_ is a dynamic C library of the functions which i am using mostly.

## **_Folder Structure_**
- ### *./include/*
	Contains header file(s).
	```c
	/* utils.h */

	/* if UTILS_MACRO */
	#define    ABS(X)           ((X) < 0x0 ? ((X) = (-X)) : ((X) = (X)))
	#define    CLEARBIT(X, N)   ((X) = ((X) & (~(0x1 << (N)))))
	#define    GETBIT(X, N)     (((X) >> (N)) & 0x1)
	#define    SETBIT(X, N)     ((X) = ((X) | (0x1 << (N))))
	#define    TOGGLEBIT(X, N)  ((X) = ((X) ^ (0x1 << (N))))
	/* endif UTILS_MACRO */

	int
	utils_atoi(const char *nbr);

	double
	utils_floor(double x);

	int
	utils_isspace(int c);

	int
	utils_isxdigit(int c);

	void *
	utils_memcpy(void *dest, const void *src, size_t n);

	void *
	utils_memset(void *dest, int c, size_t n);

	void
	utils_putchar(int fd, char c);

	void
	utils_putnbr(int fd, int nb);

	void
	utils_putstr(int fd, const char *str);

	char *
	utils_strcat(char * restrict dest, const char * restrict src);

	int
	utils_strcmp(const char *a, const char *b);

	char *
	utils_strcpy(char * restrict dest, const char * restrict src);

	size_t
	utils_strlen(const char *str);

	char *
	utils_strncat(char * restrict dest, const char * restrict src, size_t n);

	int
	utils_strncmp(const char *a, const char *b, size_t n);

	char *
	utils_strncpy(char * restrict dest, const char * restrict src, size_t n);

	size_t
	utils_strnlen(const char *str, size_t n);

	char *
	utils_strnstr(const char *haystack, const char *needle, size_t n);

	char *
	utils_strstr(const char * restrict haystack, const char * restrict needle);
	/* end of utils.h */
	```

	```makefile
	# include libutils.so file to the project
	FLAGS = -L/path/to/so/file -llibnamewithoutextension -Wl,-rpath=/path/to/so/file
	```
- ### *./tests/*
	The test environment.
	Contains files related to test cases.
- ### *./src/*
	The source files.
	Contains source files named same as the function name.


**TODO's**
- Produce only one object file instead of many files.
- Create an extra header file for macros and constants **(?)**


**Tools**
- [Binary to Decimal Converter](https://www.rapidtables.com/convert/number/binary-to-decimal.html)
- [Word Sort](https://www.browserling.com/tools/word-sort)


**_See Also_**
- [Knuth–Morris–Pratt Algorithm](https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm)
- [Single Precision Floating-point Format](https://en.wikipedia.org/wiki/Single-precision_floating-point_format)
- [Double Precision Floating-point Format](https://en.wikipedia.org/wiki/Double-precision_floating-point_format)
- [Race Condition](https://en.wikipedia.org/wiki/Race_condition#In_software)
