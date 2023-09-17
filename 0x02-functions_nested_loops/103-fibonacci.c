#include <stdio.h>

/**
 * main - Entry of point of the program
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	long long int a = 1;
	long long int b = 2;
	long long int nxt;
	long long int sum = 2;

	while (1)
	{
		nxt = a + b;

		if (nxt >= 4000000)
			break;

		if (nxt % 2 == 0)
			sum += nxt;

		a = b;
		b = nxt;
	}
	printf("\n");
	return 0;
}
