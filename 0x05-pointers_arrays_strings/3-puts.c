#include "main.h"

/**
 * _puts-prints a string, followed by a new line
 * @str: Function parameter
 *
 * Return:0
 */
void _puts(char *str)
{
	int k;

	for (k = 0 ; str[k] != '\0' ; k++)
		_putchar(str[k]);
	_putchar('\n');
}
