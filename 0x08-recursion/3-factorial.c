#include "main.h"

/**
 * factorial-returns the factorial of a given number
 * @n: Function parameter
 *
 * Return:-1 if n is lower than zero .otherwise
 *	  return the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
