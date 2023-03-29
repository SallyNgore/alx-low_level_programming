#include "main.h"

/**
 * _atoi- convert a string to an integer
 * @s: Function parameter
 *
 * Return:n. 0 if there are no numbers in string
 */
int _atoi(char *s)
{
	int i;
	int d;
	int n;
	int l;
	int f;
	int r;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	r = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			r = s[i] - '0';
			if (d % 2)
				r = -r;
			n = n * 10 + r;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
