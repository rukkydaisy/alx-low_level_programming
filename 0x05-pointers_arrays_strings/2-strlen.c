#include "main.h"
/**
 * _strlen - this program prints out
 * the lenght of a string
 *
 * @s: the string
 *
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}
	return (total_len);
}
