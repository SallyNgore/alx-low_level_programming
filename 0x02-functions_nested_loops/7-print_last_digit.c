#include "main.h"

/**
 * print_last_digit-prints the last digit of a number
 * @i:Function parameter
 *
 * Return:
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	return (j);
}
