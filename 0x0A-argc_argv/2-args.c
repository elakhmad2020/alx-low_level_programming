#include <stdio.h>

/**
 * main - Prints all arguments passed into main
 * @argc: - Number of command line arguments
 * @argv: - Array name
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int i;
	printf("%d\n", argc);
	for (i=1; i<argc;i++)
	{
		printf("%s", argv[i]);
	}
	return 0;
}

