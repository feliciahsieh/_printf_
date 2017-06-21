#include <stdarg.h>
#include "holberton.h"
/**
 * printf_octal - prints octal from printf
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_octal(va_list v)
{
        int t, d, firstdigit = 0, total = 0;
        unsigned int divisor, num = 0;
        char octal[9] = "01234567";

        num = va_arg(v, unsigned int);

        divisor = 1073741824;
        for (t = 0; t < 11; t++)
        {
                d = (num / divisor) % 8;
                if ((d != 0) && !firstdigit)
                        firstdigit = 1;
                if (firstdigit)
                {
                        _putchar(octal[d]);
                        total++;
                }
                divisor = divisor / 8;

        }
        if (total == 0)
        {
                _putchar(octal[d]);
                total++;
        }

        return (total);
}
