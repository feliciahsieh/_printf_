#include <stdarg.h>
#include <stddef.h>
#include "holberton.h"
#define R13 53
/**
 * printf_rot13 - prints rot13 of the data
 * @v: variatic list
 * Return: total characters printed
 */
int printf_rot13(va_list v)
{
	char *str;
	unsigned int total = 0, i = 0, j = 0;
	char in[R13] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[R13] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(v, char *);
	while (str && str[i])
	{
		while (j < R13)
		{
			if (str[i] == in[j])
			{
				_putchar(out[j]);
				total++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

	return (total);
}
