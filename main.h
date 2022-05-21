#ifndef PRINT_F
#define PRINT_F

#include <stdlib.h>
#include <stdarg.h>


/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_dec(va_list);
int print_hex(va_list x);
int print_heX(va_list X);
int print_octal(va_list o);
int print_binary(va_list);
int print_unsigned(va_list);
int print_rot13(va_list);
int print_reversed(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);


#endif
