#include "main.h"

/**
 * *_memcpy- copies memory area
 * @dest: First operand
 * @src: Second operand
 * @n: Third operand
 *
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
