#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator of numbers printed
 * @n: n of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
va_list m;
int i = 0;

if (n < 1)
{

putchar('\n');
return;

}

va_start(m, n);

while (i < (int) n)
{

printf("%d", va_arg(m, int));
if (separator != NULL && i != (int) n - 1)
printf("%s", separator);
i++;

}

printf("\n");
va_end(m);
}
