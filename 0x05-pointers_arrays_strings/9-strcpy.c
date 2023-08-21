#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - this program copies the string pointed
 * to by src, including the terminating
 * null byte
 *
 * @dest: a pointer
 * @src: a pointer
 *
 * Return: 0
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
