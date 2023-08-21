#include "main.h"
/**
 * print_rev - this program prints out a string
 * in reverse
 *
 * @s: the string
 *
 * Return: 0
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
