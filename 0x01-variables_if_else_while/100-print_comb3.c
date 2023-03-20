#include <stdio.h>

/**
 * main-Entry point
 *
 * Return:Always 0
 */
int main(void)
{
	int i;
	int n;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (n = 1 ; n <= 9 ; n++)
		{
			if (n != i && n > i)
			{
				putchar(i + '0');
				putchar(n + '0');
				if (i + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
