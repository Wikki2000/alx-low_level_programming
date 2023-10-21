#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the lenght of a string
 * @s: Pointer to the string whose lenght is to be calculated
 *
 * Return: The lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - Copy string from source to destination
 * @src: The pointer to the source string
 * @dest: Pointer to the destination string
 *
 * Return: The memory address of resultant string (dest)
 */
char *_strcpy(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}

/**
 * argstostr - Concatenate all program arguments with newlines
 * @ac: The number of command-line arguments
 * @av: Array of command-line argument strings
 *
 * Return: Pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_length = 0;
	int i, j, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += _strlen(av[i]) + 1;

	result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[index] = av[i][j];
			index++;
		}

		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}
