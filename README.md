# **Utilites for C**

I created a dynamic C library by detecting the functions which i am using mostly.

## **_Folder Structure_**
- ### *./include/*
	Contains header files.
	```c
	/* utils.h */
	void
	utils_putchar(int fd, char c);

	size_t
	utils_strlen(const char *str);

	int
	utils_strncmp(const char *a, const char *b, size_t n);

	size_t
	utils_strnlen(const char *str, size_t n);

	int
	utils_strcmp(const char *a, const char *b);

	void
	utils_putnbr(int fd, int nb);

	void
	utils_putstr(int fd, const char *str);

	char *
	utils_strcpy(char * restrict dst, const char * restrict src);

	char *
	utils_strncpy(char * restrict dst, const char * restrict src, size_t len);

	char *
	utils_strstr(const char * restrict haystack, const char * restrict needle);
	```

	```makefile
	# include libutils.so file to the project
	FLAGS = -L/path/to/so/file -llibnamewithoutextension -Wl,-rpath=/path/to/so/file
	```
- ### *./tests/*
	The testing environment.
	All files related to test cases.
- ### *./src/*
	The source files.
	Contains source files named same as the function name.
	
**TODO** Produce only one object file instead of many files.

