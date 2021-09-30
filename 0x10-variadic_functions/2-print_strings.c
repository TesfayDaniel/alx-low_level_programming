#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list m;
int i = 0;
char *s;

if (n < 1)
{
printf("\n");
return;
}

va_start(m, n);

while (i < (int) n)
{
s = va_arg(m, char*);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (separator != NULL && i != (int) n - 1)
printf("%s", separator);
i++;
}

printf("\n");
va_end(m);

}
