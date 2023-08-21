#include "main.h"
/**
 * swap_int - this program swaps two integers
 *
 * @a: the first pointer
 * @b: the second pointer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}

