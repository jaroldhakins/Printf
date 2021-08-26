#ifndef IMP
#define IMP
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list search);
int print_s(va_list search);
int (*list(const char *format, int a))(va_list);
int print_i(va_list search);

/**
 * struct symbols - struct type
 * @sy: symbol
 * @f: pointer to a function
 **/
typedef struct symbols
{
	char *sy;
	int (*f)(va_list search);
} symbols_t;

#endif
