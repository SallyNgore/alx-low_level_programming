#include "main.h"

/**
 * print_rev- prints a string, in reverse, followed by a new line
 * @s: Function parameter
 *
 * Return:0
 */
void print_rev(char *s)
{
	int k;
	int c = 0;

	for (k = 0 ; s[k] != '\0' ; k++)
	{
		c++;
	}
	for (k = c ; k >= 0 ; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
