#include <stdio.h>

/**
 * main - Entry of the main program
 *
 * Return: ALWAYS 0 (SUCESS)
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_prime = 0;
	unsigned long divisor = 2UL;

	while (number > 1UL)
	{
		if (number % divisor == 0UL)
		{
			largest_prime = divisor;
			while (number % divisor == 0UL)
			{
				number /= divisor;
			}
		}
		divisor++;
	}

	printf("%lu\n", largest_prime);

	return (0);
}
