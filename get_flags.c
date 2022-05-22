#include "main.h"
/**
 * get_flags - turns on flags if _printf finds
 * a flag modifier in format string
 * @s: character that holds the flag specifier
 * @p: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flags(char s, flag_t *p)
{
int i = 0;
switch (s)
{
case '+':
p->plus = 1;
i = 1;
break;
case ' ':
p->space = 1;
i = 1;
break;
case '#':
p->hash = 1;
i = 1;
break;
}
return (i);
}
