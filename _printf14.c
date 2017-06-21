#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"
/**
 * printf_reverse - prints a reverse of the data
 * @v: variatic list
 * Return: total characters printed
 */
int printf_reverse(va_list v)
{
	char *s;
	int i = 0, length = 0;

	s = va_arg(v, char *);
	while (s[length])
		length++;

	while ((length - i - 1) >= 0)
	{
		_putchar(s[length - i - 1]);
		i++;
	}
	return (i);
}
