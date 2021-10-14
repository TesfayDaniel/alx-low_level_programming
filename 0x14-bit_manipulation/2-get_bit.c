#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *@n: unsigned long int
 *@index: leng is index
 *Return: the value of the bit at index or -1 if an error ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	else
		return ((n >> index) & 1);
}
