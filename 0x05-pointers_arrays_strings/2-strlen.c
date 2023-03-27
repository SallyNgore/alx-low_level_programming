#include "main.h"

/**
 * _strlen- returns the length of a string.
 * @s: Function parameter
 *
 * Return:c
 */
int _strlen(char *s)
{
	int k;
	int c = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
	{
		c++;
	}
	return (c);
}
