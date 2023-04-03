#include "main.h"

/**
 * *_strchr- locates a character in a string
 * @s: First operand
 * @c: Second operand
 *
 * Return:s + i . 0 otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
