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
	int count = 2;

	printf("%lu, %lu, ", a, b);
	while (count < 98)
	{
		temp = a + b;
		a = b;
		b = temp;
		count++;

		if (count < 98)
			printf("%lu, ", temp);
		else
			printf("%lu\n", temp);
	}

	return (0);
}
