#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end dest
 * @n: integer parameter to compare index to
 * Retun: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
