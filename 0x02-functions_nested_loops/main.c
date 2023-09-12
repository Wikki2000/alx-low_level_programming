#include <stdio.h>
#define SIZE 1
#define COUNT 1

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write.
 *
 * This function writes the character 'c' to the standard output (stdout).
 *
 * Return: On success, the character 'c' is returned.
 * On failure, EOF is returned.
 */
int _putchar(char c)
{
	return (fwrite(&c, SIZE, COUNT, stdout));
}
