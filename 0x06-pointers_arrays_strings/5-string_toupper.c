#include "main.h"
/**
 * string_toupper - this program changes all lower
 * case letter of a string to
 * uppercase
 *
 * @str: the string to be changed
 *
 * Return: 0
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

