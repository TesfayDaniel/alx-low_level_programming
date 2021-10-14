#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * @n: var 1.
 * @m: var 2.
 * Return: Number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f;
	unsigned int c = 0;

	f = n ^ m;

	while (f)
	{
		c += f & 1;
		f >>= 1;
	}
	return (c);
}
