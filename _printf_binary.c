#include <stdarg.h>
#include "holberton.h"
/**
 * printf_binary - prints binary from printf
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_binary(va_list v)
{
	int t, d, index = 0, highestorderdigit = 0, totalchars = 0;
	unsigned int divisor, num;
	char digits[32] = { 0 };

	(void) digits;

	num = va_arg(v, unsigned int);
	divisor = 2147483648;
	for (t = 0; t < 32; t++)
	{
		d = (num / divisor) % 2;
		if ((d != 0) && !highestorderdigit)
			highestorderdigit = 1;
		if (highestorderdigit)
		{
			digits[index++] = d + '0';
			_putchar(d + '0');
			totalchars++;
		}
		divisor = divisor / 2;
	}
	if (totalchars == 0)
	{
		digits[index++] = '0';
		digits[index] = '\0';
		_putchar(d + '0');
		totalchars++;
	}
	digits[index] = '\0';

	return (totalchars);
}
