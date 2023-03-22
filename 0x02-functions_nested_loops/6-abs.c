#include "main.h"

/**
 * _abs-computes the absolute value of an integer
 * @i:Function parameter
 *
 * Return:Always i
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
