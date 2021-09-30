#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_ch - entry point.
 * @var: list.
 * Return: nothing.
 */

void print_ch(va_list var)
{
	char li;

	li = va_arg(var, int);
	printf("%c", li);
}

/**
 * print_int - entry point.
 * @var: list.
 * Return: nothing.
 */

void print_int(va_list var)
{
	int li;

	li = va_arg(var, int);
	printf("%d", li);
}

/**
 * print_flo - entry point.
 * @var: list.
 * Return: nothing.
 */

void print_flo(va_list var)
{
	double li;

	li = va_arg(var, double);
	printf("%f", li);
}

/**
 * print_str - entry point.
 * @var: list.
 * Return: nothing.
 */

void print_str(va_list var)
{
	char *li;

	li = va_arg(var, char *);
	if (li == NULL)
	{
		li = "(nil)";
	}
	printf("%s", li);
}

/**
 * print_all - entry point.
 * @format: list of types arguments.
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	mr L[4] = {
		{'c', print_ch},
		{'i', print_int},
		{'f', print_flo},
		{'s', print_str}
	};
	int i = 0;
	int j = 0;
	int k = 0;
	va_list valist;

	va_start(valist, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == L[j].t)
			{
				switch (k)
				{
				case 0:
					break;
				default:
					printf(", ");
				}
				L[j].p(valist);
				k++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
