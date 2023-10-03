#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the product between two numbers
 * @argc: Numbers of arguements
 * @argv: Arrays of arguements
 *
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		puts("Error");
	else
	{
		int num1;
		int num2;
		int result;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;

		printf("%d\n", result);
	}
	return (0);
}
