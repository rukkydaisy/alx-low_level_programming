#include "main.h"
/**
 * factorial - this program returns the factorial
 * of a given number
 * @n: the number
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
		/*_putchar("\n");*/
}

