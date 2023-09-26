#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix (number of rows or columns)
 *
 * Description:
 * This function calculates and prints the sum of the two diagonals of a square
 * matrix 'a'. The function assumes that 'a' is represented as a 1D array in
 * memory, and 'size' is the size of the matrix.
 *
 * Return: None (void)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];

		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
