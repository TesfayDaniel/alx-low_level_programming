#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - add
 * @a: integer
 * @b: integer
 * Return: result.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - difference
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - check if a number is equal to 98
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - check if a number is equal to 98
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mod(int a, int b)
{
return (a % b);
}
