# **Test Cases for Lib Utils**

- ### This folder contains the source codes of instant test scenarios created for the designed utils functions.

- ### You can use this area for any purpose you want, it's not relevant to the project.

## Compiling Sources

- Simply use `make all` to compile all of your source files. `all` directive \
creates `.o` executable for each source file (same name as source file has) \
and puts these `.o` files in the `./out` directory.

## Measuring Performance

- That snippet measures execution time of a callback function:
```c
#include <time.h>

// callback takes one integer as parameter. you can add more.
// using variadic functions as callback, is a non-standard way.
double
measure_performance(void (*callback)(int), int param1)
{
    clock_t start_time;
    clock_t end_time;
    double elapsed_time;

    start_time = clock();

    callback(param1);

    end_time = clock();

    elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    return (elapsed_time);
}

void
callback_function(int parameter)
{
    /* do stuff here which you want to measure its execution time */
}

int
main(void)
{
    int callback_param = 0;
    double elapsed_time;
    /* use it as is. */
    elapsed_time = measure_performance(callback_function, callback_param);

    return (0);
}
```

