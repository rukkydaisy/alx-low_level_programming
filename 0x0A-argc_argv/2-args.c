#include <stdio.h>
/**
 * main - this program prints all arguments it receives
 * @argc: number of command line argument
 * @argv: array that contains the program arg.
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
