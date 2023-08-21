#include "main.h"
/**
 * puts_half - this program prints half
 * of a string, followed by
 * a new line
 *
 * @str: the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int half, j;

	while (str[i] != '\0')
	{
		i++;
	}
	half = (i - 1) / 2;

	for (j = (half + 1); j < i; j++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
