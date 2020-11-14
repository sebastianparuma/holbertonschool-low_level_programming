#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Number of arguments.
 * @argv: Array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
