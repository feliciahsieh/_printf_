#include <stdarg.h>
#include "holberton.h"
/**
 * printf_hex - prints hex from printf
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_hex(va_list v)
{
        int t, d, firstdigit = 0, total = 0;
        unsigned int divisor, num = 0;
        char hex[17] = "0123456789abcdef";

	num = va_arg(v, unsigned int);
        divisor = 268435456;
        for (t = 0; t < 8; t++)
        {
                d = (num / divisor) % 16;
                if ((d != 0) && !firstdigit)
                        firstdigit = 1;
                if (firstdigit)
                {
                        _putchar(hex[d]);
                        total++;
                }
                divisor = divisor / 16;
        }
        if (total == 0)
        {
                _putchar(hex[d]);
                total++;
        }

        return (total);

}


/**
 * printf_hexUpper - prints hex from printf
 * @v: variatic list
 * Return: number of characters printed
 */
int printf_hexUpper(va_list v)
{
        int t, d, firstdigit = 0, total = 0;
        unsigned int divisor, num = 0;
        char hex[17] = "0123456789ABCDEF";

        num = va_arg(v, unsigned int);
        divisor = 268435456;
        for (t = 0; t < 8; t++)
        {
                d = (num / divisor) % 16;
                if ((d != 0) && !firstdigit)
                        firstdigit = 1;
                if (firstdigit)
                {
                        _putchar(hex[d]);
                        total++;
                }
                divisor = divisor / 16;
        }
        if (total == 0)
        {
                _putchar(hex[d]);
                total++;
        }

        return (total);
}
