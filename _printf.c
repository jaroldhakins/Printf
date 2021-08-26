#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - copy of original printf
 *
 * @format: list
 *
 * Return: count imp.
 **/
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int imp = 0;

	va_list search;

	if (!format || format[i] == '\0')
	{
		return (-1);
	} 
	va_start(search, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(37);
			i++;
			imp++;
		}
		if (format[i] == '%')
		{
			i++;
			imp = imp + list(format, i)(search);
		}
		else
		{
			_putchar(format[i]);
			imp++;
		}
	}
	va_end(search);
	return (imp);
}
