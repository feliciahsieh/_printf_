#include <stdarg.h>
#include "holberton.h"
/**
 * printf_uint - prints unsigned integer from printf
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_uint(va_list v)
{
	int divisor = 1, t, d, index = 0, highestorderdigit = 0, totalchars = 0;
	unsigned int num;
	char digits[12] = { 0 };

	digits[0] = digits[0];
	num = va_arg(v, int);
	divisor = divisor * 1000000000;
	for (t = 0; t <= 9; t++)
	{
		d = (num / divisor) % 10;
		if ((d != 0) && !highestorderdigit)
			highestorderdigit = 1;
		if (highestorderdigit)
		{
			digits[index++] = d + '0';
			_putchar(d + '0');
			totalchars++;
		}
		divisor = divisor / 10;
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
