#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stdarg.h>

/**
 * print_c - prints char
 * @search: list
 * Return: count
 **/
int print_c(va_list search)
{
	char c;

	c = (char) va_arg(search, int);

	_putchar(c);

	return (1);
}
/**
 * print_s - prints string
 * @search: list
 * Return: count
 **/
int print_s(va_list search)
{
	char *s;
	int i;

	s = va_arg(search, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * print_i - print numbers
 * @search: lista
 * Return: count
 **/
int print_i(va_list search)
{
	int num;
	int a = 0;
        int b;

	num = va_arg(search, int);

        if (num < 0)
	{
	  _putchar(45);
	  b = num * -1;
	  a++;
	}
	if (b >= 0 && b <= 9 )
	{
		_putchar(num + 48);
		a++;
	}
	else
	{
	  b = num;
	}
	while (b > 9)
	{
	  a = _putchar(b / 10 + 48);
	  a = _putchar(b % 10 + 48);
	  b = b / 10;
	}
	return(a);
}
