#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (succcess)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int i;
	long int nxt;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		nxt = a + b;
		printf("%ld,", nxt);

		a = b;
		b = nxt;
	}
	printf("\n");
	return (0);
}
