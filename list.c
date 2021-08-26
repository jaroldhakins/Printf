#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * list - compare and send to the correct function
 *
 * @format:list to compare
 * @a: int count
 *
 * Return: pointer function
 **/
int (*list(const char *format, int a))(va_list)
{
	int j;

	symbols_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{NULL, NULL}
	};

	for (j = 0; ops[j].sy != NULL; j++)
	{
		if (format[a] == *ops[j].sy)
			return (ops[j].f);
	}
	return (NULL);
}
