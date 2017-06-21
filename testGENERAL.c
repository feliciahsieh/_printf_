#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	int i;
	char *a = NULL;

	/* %c - character */
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
	for(i = 0; i < 128; i++)
	{
		_printf("%c", i);
	}
	printf("\n");
	for(i = 0; i < 128; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	_printf("Character:%c\n", '\0');
	printf("Character:%c\n", '\0');

        /* %s - string */
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", a);
	printf("String:[%s]\n", a);
	_printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	printf("String:1234567890 1234567890 1234567890 1234567890 qwertyuiop[]\asdfghjkl;'zxcvbnm,./`1234567890-=~!@#$%^&*()_+\{}:?><");
	/* Also check length of strings */

	/* %% - percent sign */
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
	_printf("% %");
	printf("% %");
	_printf("%  %");
	printf("%  %");
	_printf("%%%");
	printf("%%%");
	_printf("%%%%");
	printf("%%%%");
	_printf("%%%   ");
	printf("%%%   ");
	/*Also check length of each*/

	/* %p - pointer */
	addr = (void *)0x7ffe637541f0;
        _printf("Address:[%p]\n", addr);
        printf("Address:[%p]\n", addr);

	/* %d %i - integer */
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
	_printf("%d %d", 10);
	printf("%d %d", 10);

        /* %u - unsigned int */
        ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned:[%u]\n", UINT_MAX);
	printf("Unsigned:[%u]\n", UINT_MAX);

	/* %o - unsigned octal  */
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);

	/* %x %X - unsigned hexadecimal */
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	/* %b - binary */
	_printf("Binary:%b\n", 98);
	_printf("Binary:%b\n", UINT_MAX);
	/* printf() for %b does not exist */

	/* %ld - long int */
	_printf("Long int:[%ld]\n", LONG_MIN);
	printf("Long int:[%ld]\n", LONG_MIN);
	_printf("Long int:[%ld]\n", LONG_MAX);
	printf("Long int:[%ld]\n", LONG_MAX);

	/* %R - rot13 */
	_printf("%R", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz \n\t");
	/* printf doesn't exist */

	/* %r - reverse */
	_printf("%r", "abcdefghijklmnopqrstuvwxyz");
	_printf("%r", "");
	_printf("%r", "a");
	_printf("%r", a);
	/* don't print termination string */

	return (0);
}
