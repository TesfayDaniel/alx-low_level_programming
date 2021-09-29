#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: Array with the elements
 * @size: Size of the array
 * @action: Pointer of the function that I need use
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

size_t i;

if (array && size && action)
{
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}

}
