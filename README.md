# **Utilites for C**

I created a dynamic C library by detecting the functions which i am using mostly.

## **_Folder Structure_**
- ### *./include/*
	Contains header files.
	```c
	/* utils.h */
	void utils_putchar(int fd, char c);
	size_t utils_strlen(const char *str);
	size_t utils_strnlen(const char *str, size_t n);
	int utils_strcmp(const char *a, const char *b);
	void utils_putnbr(int fd, int nb);
	void utils_putstr(int fd, const char *str);
	char * utils_strcpy(char * restrict dst, const char * restrict src);
	char * utils_strncpy(char * restrict dst, const char * restrict src, size_t len);
	```
- ### *./out/*
	Includes dynamic library(ies). *(final step of the project)*
- ### *./obj/*
	For every source file, compiler creates an object file and puts in here.
	All of the object files are located in here.<br>
	**TODO** Produce only one obj file instead of many files.
- ### *./src/*
	The source files.
	For each function, I created a source file with the same name as the function.

