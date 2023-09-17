#include <stdio.h>

/**
 * main - Entry of the main program
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long temp;
	int i = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf("%lu, ", temp);
	}

	return (0);
}
