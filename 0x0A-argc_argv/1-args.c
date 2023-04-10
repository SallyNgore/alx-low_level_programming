#include "main.h"
#include <stdio.h>

/**
 * main-entry point
 * @argc: First operand
 * @argv: Second operand
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
