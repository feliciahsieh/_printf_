#ifndef _PRINT_F
#define _PRINT_F
#include <stdarg.h>
/**
 * struct _printf_ - struct for matching data type with print function
 * @prType: char to determine type to print
 * @f: associated function
 */
typedef struct _printf_
{
	char prType;
	int (*f)();
} _printf_t;

int _putchar(char c);

int printf_percent(void);
int printf_char(va_list v);
int printf_string(va_list v);

int printf_integer(va_list v);
int printf_uint(va_list v);

int printf_binary(va_list v);
int printf_hex(va_list v);
int printf_hexUpper(va_list v);

int printf_rot13(va_list v);
int printf_reverse(va_list v);

int printf_S(va_list v);

int printf_octal(va_list v);

int pr_process(va_list v, char nextchar);

int _printf(const char *format, ...);

#endif /* _PRINT_F */
