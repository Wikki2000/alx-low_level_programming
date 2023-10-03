#include <stdio.h>

/**
 * main - print the number of argument pass though main function
 *
 * @argc - numbers of arguments
 * @argv - arrays 0of argument
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
