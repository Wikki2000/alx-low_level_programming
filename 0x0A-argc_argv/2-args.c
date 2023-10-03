#include <stdio.h>

/**
 * main - Prints argument from CLI followed by newline
 *
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i = 0; 

	for (; i < argc; i++)
		puts(argv[i]);
	return (0);
}
