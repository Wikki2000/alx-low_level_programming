#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments as strings
 *
 * This program adds positive numbers provided as command-line arguments.
 * It validates the arguments and handles errors if they are not +ve numbers
 * no arguments are provided. It then prints the sum of the positive numbers.
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (; i < argc; i++)
	{
		int num = atoi(argv[i]);

		for (; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}


		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
