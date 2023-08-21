#include "main.h"
/**
 * rev_string - this program prints a
 * string in reverse
 *
 * @s: the string
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char a;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		a = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = a;
	}
}
