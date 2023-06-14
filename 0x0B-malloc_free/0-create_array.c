#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 * and initializes with a specific char
 * @size: First operand
 * @c: Second operand
 *
 * Return: NULL if size = 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *q;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	q = malloc(sizeof(char) * size);

	if (q == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			q[i] = c;
		}
	}
	return (q);

}
