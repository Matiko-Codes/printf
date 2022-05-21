#include "main.h"
/**
 * _printf - prints formatted data in stdout
 * @format: string that contains the format to br printed
 * Return: number of characters
 */
int _printf(char *format, ...)
{
int record = 0, (*structype)(char *, va_list);
char q[3];
va_list ap;
if (format == NULL)
return (-1);
q[2] = '\0';
va_start(ap, format);
_putchar(-1);
while (format[0])
{
if (format[0] == '%')
{
structype = driver(format);
if (structype)
{
q[0] = '%';
q[1] = format[1];
record += structype(q, ap);
}
else if (format[1] != '\0')
{
record += _putchar('%');
record += _putchar(format[1]);
}
else
{
record += _putchar('%');
break;
}
format += 2;
}
else
{
record += _putchar(format[0]);
format++;
}
}
_putchar(-2);
return (record);
}
int main (int argc, char *argv[])
{
  int j = 0;
  printf("Enter character and string\n");
  j = _printf("%c %s \n",'A', "Hello ATHman");
  printf("%d\n", j);
  return 0;
}
