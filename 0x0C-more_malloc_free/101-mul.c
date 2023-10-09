#include <stdio.h>
#include <stdlib.h>

int isNumber(char *str);

/**
 * main - Enttry point of program
 * @argc: The number of command-line arguement
 * @argv: The command-line arguement enter as string
 *
 * This progam calculate the product of two number enter as an arguements
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	else if (!isNumber(argv[1]) || !isNumber(argv[2]))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

/**
 * isNumber - Checked if a string contains only digit
 * @str: The string to be checked
 *
 * Return: 1 if all character are digits , 0 otherwise.
 */
int isNumber(char *str)
{
	while (1)
	{
		if (*str >= '0' && *str <= '9')
			return (1);
		else
			return (0);
		str++;
	}
}
