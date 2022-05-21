#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * find_correct_func - finding the format for _printf
 * @format: format
 * Return: NULL
 */

int (*find_correct_func(const char *format))(va_list)
{
unsigned int i = 0;
code_f find_f[] = {
{"c", print_char},
{"s", print_string},
{"i", print_int},
{"d", print_decimal},
{"r", print_reverse},
{"b", print_binary},
{"u", print_unsigned},
{"o", print_oct},
{"x", print_hexa},
{"X", print_HEXA},
{"R", print_rot13},
{"S", print_S},
{"p", print_p},
{NULL, NULL}
};

while (find_f[i].sc)
{
if (find_f[i].sc[0] == (*format))
return (find_f[i].f);
i++;
}
return (NULL);
}

/**
 * _printf - produces an output based on format
 * @format: format
 * Return: size
 */
int _printf(const char *format, ...)
{
va_list list;
int (*f)(va_list);
unsigned int i = 0, len = 0;
if (format == NULL)
return (-1);
va_start(list, format);
while (format[i])
{
while (format[i] != '%' && format[i])
{
_putchar(format[i]);
len++;
i++;
}
if (format[i] == '\0')
return (len);
f = find_correct_func(&format[i + 1]);
if (f != NULL)
{
len += f(list);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
len++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(list);
return (len);
}
int main ()
{
  int j = 0;
  printf("Enter character and string\n");
  j = _printf("%c %s \n",'A', "Hello ATHman");
  printf("%d\n", j);
  return 0;
}
