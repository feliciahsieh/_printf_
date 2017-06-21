#include <stdarg.h>
#include "holberton.h"


/**
 * printf_S - prints custom S conversion specifier
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_S(va_list v)
{
	char *s;
	char hex[17] = "0123456789ABCDEF";
	int total = 0, i = 0, c = 0;

	(void)hex;
	s = va_arg(v, char *);

	while (s[i])
	{
		if (((s[i] >= 0) && (s[i] < 32)) || (s[i] >= 127))
		{
			total += _putchar('\\');
			total += _putchar('x');
			if (s[i] < 16)
			{
				total += _putchar('0');
				c = s[i] - '0';
				total += _putchar(hex[c]);
			}
/*
			else if (s[i] < 32)
			{
				total += _putchar('1');
				total += _putchar(hex[s[i] - '0' - 16]);
			} else if (s[i] == 127)
			{
				total += _putchar('7');
				total += _putchar('F');
			} else
			{
				total += _putchar(s[i]);
			}
*/
		}
		else
		{
			_putchar(s[i]);
			total++;
		}
	}

	return (total);
}
