#include "main.h"
/**
 * _isdigit: this program checks for a digit (0 through 9).
 *
 * @c: parameter
 *
 * Return: return 1 if its a number and 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

