#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a the string given as a parameter
 * @str: Pointer to the string to be copy
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;
	int i = 0;

	if (str == NULL)
		return NULL;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	ptr = (char*) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return NULL;

	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}
