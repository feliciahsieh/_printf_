#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"
/**
 * pr_process - process the printf variants of the characters after %
 * @v: variatic list
 * @nextchar: char of next line
 * Return: total characters printed
 */
int pr_process(va_list v, char nextchar)
{
	int total = 0, j = 0;
	_printf_t p[] = {
                {'c', printf_char},
                {'s', printf_string},
                {'%', printf_percent},
                {'d', printf_integer},
                {'i', printf_integer},
                {'r', printf_reverse},
                {'R', printf_rot13},
                {'b', printf_binary},
		{'x', printf_hex},
		{'X', printf_hexUpper},
                {'o', printf_octal},
		{'u', printf_uint},
		{'S', printf_S},
                {'\0', NULL}
        };

	while (p[j].prType)
	{
		if (nextchar == p[j].prType)
		{
			total += p[j].f(v);
			return (total);
		}
		j++;
	}
	if (j == 11)
	{
		total += _putchar('%');
		total += _putchar(nextchar);
	}

	return (total);
}
