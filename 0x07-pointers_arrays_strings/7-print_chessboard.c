#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: 2D array representing the chessboard
 *
 * Description:
 * This function prints a chessboard based on the 2D array 'a', where each
 * element of the array represents a cell on the chessboard.
 *
 * Return: None (void)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}

