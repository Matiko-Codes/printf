#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int func_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_char(va_list arg);
int print_sign(va_list arg, int base);
int print_unsign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_reverse(va_list arg);
int print_base16_ul(va_list arg, char *representation);
int loop_format(va_list arg, const char *string);
int call_func_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);

#endif
