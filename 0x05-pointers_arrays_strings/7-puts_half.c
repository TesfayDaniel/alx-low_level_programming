#include "main.h"

/**
 * puts_half - prints half of string i.e  second half of string
 * @str: string in question
 *
 * Return: void
 */

void puts_half(char *str)
{
int count = 0, i;

while (*(str + count) != '\0')
{
count++;
}
for (i = 0 ; i < count ; i++)
{
if (i > (count - 1) / 2)
_putchar(*(str + i));
}
_putchar('\n');
}
