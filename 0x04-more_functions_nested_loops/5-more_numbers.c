#include "main.h"

/**
 * more_numbers-prints 10 times the numbers, from 0 to 14
 *
 * Return:Always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		_putchar(i + '0');
		for (j = 0 ; j <= 14 ; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
