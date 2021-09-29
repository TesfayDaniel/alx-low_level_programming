#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: Array with the elements
 * @size: Size of the array
 * @cmp: Pointer of the function that I compare values
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0 && array && cmp)
for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return (i);
return (-1);
}
