#include "main.h"

/**
 * puts2-prints every other character of a string, starting with the first character
 * @str: Function parameter
 *
 * Return:0
 */
void puts2(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
