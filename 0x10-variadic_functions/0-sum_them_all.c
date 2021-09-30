#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all arguments
 * @n: integral
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)

{
int sum = 0;
int i;
va_list m;

if (n == 0)
{
return (0);
}
va_start(m, n);

for (i = 0; i < (int) n ; i++)
{
sum += va_arg(m, int);
}

va_end(m);

return (sum);
}
