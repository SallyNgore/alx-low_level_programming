#include "main.h"
#include <stdio.h>

/**
 * main-entry point
 * @argc: First operand
 * @argv: Second operand
 *
 * Return:0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}	
