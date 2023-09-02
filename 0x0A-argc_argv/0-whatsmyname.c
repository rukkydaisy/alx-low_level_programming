#include <stdio.h>
/**
 * main - prints its name
 * followed by a newline
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arg..
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
