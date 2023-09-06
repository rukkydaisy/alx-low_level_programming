#include "main.h"
#include <stdlib.h>
/**
 * _strdup - this program returns a pointer to a newly allocated space
 * @str: the string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	strdout = malloc(sizeof(char) * (i + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}





