#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry of the program
 *
 * This program will assign a random number to the
 * variable n each time it is executed. it alo print the last digit
 * of the number as well.
 *
 *Return: Always 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastdigit;

	lastdigit = n % 10;

	printf("Last digit of %d is %d", n, lastdigit);

	if (lastdigit > 5)
		printf(" and is greater than 5\n");
	if (lastdigit == 0)
		printf(" and is 0\n");
	if (lastdigit < 6)
		printf(" and is less than 6 and not 0\n");

	return (0);
}
