#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: this starts from 0 of the bit to be set
 * @n: points to the value of variable
 * Return: 1 for success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fig;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	fig = 1 << index;
	*n = *n | fig;

	return (1);
}
