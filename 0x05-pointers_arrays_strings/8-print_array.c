#include <stdio.h>
/**
 * print_array - the program prints elementss
 * of an array of integers
 *
 * @a: integer a
 * @l: integer l
 *
 * Return: 0
 *
 */
void print_array(int *a, int l)
{
	int i;

	for (i = 0; i < l; i++)
	{
		printf("%d", a[i]);
	
	if (i != (l - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
