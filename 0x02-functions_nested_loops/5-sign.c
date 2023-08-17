#include "main.h"
/**
 * print_sign - This program prints the sign of numbers
 *
 * Return: Returns 1 if positive, 0 if zero and -1 if negarive
 *
 * @n: Collects values
 */
int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}

