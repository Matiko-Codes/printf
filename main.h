#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct containing flags to "switch on"
 * when a flag specifier is passed to _printf()
 * @add: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
int plus;
int space;
int hash;
} flag_t;
/**
 * struct printHandle - struct to choose the right function according
 * to the format specifier passed in _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandle
{
char c;
int (*p)(va_list ap, flag_t *p);
} ph;
/* print_nums */
int print_int(va_list l, flag_t *p);
void print_num(int n);
int print_unsigned(va_list l, flag_t *p);
int count_dig(int i);
/* print_bases */
int print_hexa(va_list l, flag_t *p);
int print_HEXA(va_list l, flag_t *p);
int print_bin(va_list l, flag_t *p);
int print_oct(va_list l, flag_t *p);
/* converter */
char *convert(unsigned long int num, int base, int lowercase);
/* _printf */
int _printf(const char *format, ...);
/* get_print */
int (*get_printf(char s))(va_list, flag_t *);
/* get_flags */
int get_flags(char s, flag_t *p);
/* print_alpha */
int print_string(va_list l, flag_t *p);
int print_char(va_list l, flag_t *p);
/* write_funcs */
int _putchar(char c);
int _puts(char *str);
/* print_custom */
int print_rot13(va_list l, flag_t *p);
int print_reverse(va_list l, flag_t *p);
int print_S(va_list l, flag_t *p);
/* print_address */
int print_address(va_list l, flag_t *p;
/* print_percent */
int print_percent(va_list l, flag_t *p);

#endif
