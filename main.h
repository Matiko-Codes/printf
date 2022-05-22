#ifndef PRINT_F
#define PRINT_F

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

struct convert
{
  char *sc;
  int (*f)(va_list);
};
typedef struct convert conver_t;

int format_reciever(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_decimal(va_list d);
int print_hexa(va_list x);
int print_HEXA(va_list X);
int print_oct(va_list o);
int print_binary(va_list b);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_reverse(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);

int print_number(va_list args);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int n);
int hex_check(int num, char x);
int print_hex_aux(unsigned long int num);
int isNonAlphaNumeric(char c); 
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);

#endif


