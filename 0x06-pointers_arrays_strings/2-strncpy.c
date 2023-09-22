#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	while (*dest != '\0') {
		dest++;
	}

	/* Copy characters from src to dest up to a maximum of n characters */
	while (*src != '\0' && n > 0) {
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (dest);
}
