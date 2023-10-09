#include <stdio.h>
/**
 * print_buffer - Prints the content of a buffer in a hex and ASCII format.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 *
 * Description:
 * This function prints the content of the buffer 'b' in both hexadecimal
 * and ASCII formats. It prints 10 bytes per line, displaying
 * the hexadecimal values and their corresponding.
 *
 * Return: Void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10 && j < size; j++)
			printf("%02x ", b[j]);
		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}

