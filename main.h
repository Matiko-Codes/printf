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
int print_char(va_list c);
int print_string(va_list s);
int print_decimal(va_list d);
int print_hexa(va_list x);
int print_HEXA(va_list X);
int print_oct(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_reverse(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);


#endif
