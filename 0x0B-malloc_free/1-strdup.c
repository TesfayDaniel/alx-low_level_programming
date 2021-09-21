#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates space in memory
 * @str: input string
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{
char *duplicate;
int index, len = 0;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (index = 0; str[index]; index++)
duplicate[index] = str[index];

duplicate[len] = '\0';

return (duplicate);
}
