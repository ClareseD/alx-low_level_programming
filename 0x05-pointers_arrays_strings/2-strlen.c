#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: Strings to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
	{
c++;
	}

	return (c);
}
