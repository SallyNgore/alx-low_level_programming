#include <stdio.h>

/**
 * main-Entry point
 *
 * Return:Always 0
 */
int main(void)
{
	int i;
	char g;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i);
	for (g = 'a' ; g <= 'f' ; g++)
		putchar(g + 'a');
       	putchar('\n');
	return (0);
}	
