#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that performs simple operations
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0.
 * only 3 if argv[1] argv[2] argv[3]
 */

int main(int argc, char *argv[])
{
	int o;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' &&
*argv[2] != '-' &&
*argv[2] != '*' &&
*argv[2] != '/' &&
*argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	o = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", o);
	return (0);
}
