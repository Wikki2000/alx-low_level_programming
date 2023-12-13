#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int num1, num2, result;
	char *opt;

	num1 = atoi(av[1]);
	opt = av[2];
	num2 = atoi(av[3]);

	/* Check if arg exceed 4 or invalid operator */
	if (ac != 4 || get_op_func(opt) == NULL)
	{
		puts("Error");
		exit(98);
	}

	/* Handle division by zero error */
	if (num2 == 0 && (opt[0]== '/' || opt[0] == '%'))
	{
		puts("Error");
		exit(100);
	}

	result = get_op_func(opt)(num1, num2);
	printf("%d\n", result);

	return 0;
}

