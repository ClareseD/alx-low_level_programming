#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 *
 * @a: An intege to swap
 * @b: Another integer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b);

{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
