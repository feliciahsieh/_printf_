#!/bin/bash
rm a.out
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=c90 main.c _printf.c _printf1.c  _printf_uint.c _putchar.c _printf_process.c _printf0.c _printf4.c _printf_binary.c _printf15.c _printf14.c _printf_hex.c _printf6.c
./a.out
